library(oce) # must be recent, containing parametericDerivative()
library(Rcpp)
debug <- 1

n <- 21
x0 <- 0.5
y0 <- 0.5
x <- seq(0, 1, length.out=n)
y <- seq(0, 1, length.out=n)
set.seed(2019.0212)
z <- outer(x, y, function(x,y) 1.5*(x-x0)^2+(y-y0)^2) + rnorm(n*n, sd=0.01)
levels <- seq(0.05, 1, 0.05)
if (!interactive()) pdf("contourlabels_03.pdf", height=4)
par(mar=c(2, 2, 1, 1))
par(mfrow=c(1, 2))
contour(x, y, z, levels=levels, labcex=1)

contour(x, y, z, levels=levels, labcex=1, drawlabels=FALSE)
##.stop()

## Labelling at flatest spots
##levels <- 0.05
for (level in levels) {
    label <- as.character(level)
    w <- strwidth(level, "user")
    if (debug>0) cat("'", label, "' has x width ", format(w, 3), "\n")
    contourlines <- contourLines(x, y, z, levels=level)
    for (i in seq_along(contourlines)) {
        xc <- contourlines[[i]]$x
        yc <- contourlines[[i]]$y
        nc <- length(xc)
        ##lines(xc, yc, col=2, type='o', pch=20, cex=2/3)
        lines(xc, yc, col=2, pch=20, cex=2/3)
        slopeMin <- 9999999 # big
        slopeMinj <- NULL
        slopeMinj2 <- NULL
        canlabel <- FALSE
        ##for (j in seq.int(2L, nc-1L)) { # skip 1 to avoid labels on edges
        for (j in 1:nc) {
            j2 <- j
            while (j2 < nc) {
                dy <- yc[j2] - yc[j]
                dx <- xc[j2] - xc[j]
                dist <- sqrt(dx^2 + dy^2)
                if (dx == 0)
                    step
                ##. if (j == 1)
                ##.     cat(sprintf("j=%2d j2=%2d dist/w=%5.2g slope=%5.2g\n",
                ##.                 j, j2, dist/w, slope))
                if (dist > 1.4 * w) {
                    if (debug>0) cat(sprintf("enough space at j=%d j2=%d\n", j, j2))
                    slope <- dy / dx
                    if (abs(slope) < slopeMin) {
                        slopeMin <- abs(slope)
                        slopeMinj <- j
                        slopeMinj2 <- j2
                        canlabel <- TRUE
                    }
                    break
                }
                j2 <- j2 + 1
            }
        }
        if (canlabel) {
            labelj <- floor(0.5 + 0.5*(slopeMinj + slopeMinj2))
            angle <- atan2(yc[slopeMinj2]-yc[slopeMinj], xc[slopeMinj2]-xc[slopeMinj])
            if (debug > 0) {
                cat(sprintf("j=%d j2=%d slopeMin=%.3g slopeMinj=%d slopeMinj2=%d\n",
                            j, j2, slopeMin, slopeMinj, slopeMinj2))
                points(xc[slopeMinj], yc[slopeMinj], col="darkgreen", pch=20)
                points(xc[slopeMinj2], yc[slopeMinj2], col="red", pch=20)
                points(xc[labelj], yc[labelj], col="blue", pch=20) # centre
                if (label == "0.25")
                    cat(sprintf("step 1: label='%s' x=%.2g y=%.2g angle=%.9g deg\n",
                                label, xc[labelj], yc[labelj], angle*180/pi))
            }
            ##if (angle < 0)
            ##    angle <- angle + 360
            if (angle > pi/2 || angle < -pi/2)
                angle <- angle + pi
            ##if (label == "0.2") browser()
            if (debug > 0 && label == "0.25")
                cat(sprintf("step 2: label='%s' x=%.2g y=%.2g angle=%.9g deg\n",
                            label, xc[labelj], yc[labelj], angle*180/pi))
            w <- 1.1*strwidth(label, "user")
            h <- 1.1*strheight(label, "user")
            S <- sin(-angle)
            C <- cos(-angle)
            rot <- matrix(c(C, -S, S, C), byrow=TRUE, nrow=2)
            X <- c(-w/2, -w/2, w/2, w/2)
            Y <- c(-h/2, h/2, h/2, -h/2)
            XY <- cbind(X, Y)
            XYrot <- XY %*% rot
            col <- rgb(1, 0.5, 0.5, alpha=0.2)
            polygon(xc[labelj]+XYrot[,1], yc[labelj]+XYrot[,2], col=col, border=col)
            text(xc[labelj], yc[labelj], label, col="purple", srt=angle*180/pi)
        }
    }
}
if (!interactive()) dev.off()

