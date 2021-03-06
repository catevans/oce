% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/moon.R
\name{julianCenturyAnomaly}
\alias{julianCenturyAnomaly}
\title{Julian-Day number to Julian century}
\usage{
julianCenturyAnomaly(jd)
}
\arguments{
\item{jd}{a julian day number, e.g. as given by \code{\link{julianDay}}.}
}
\value{
Julian century since noon on January 1, 1900.
}
\description{
Convert a Julian-Day number to a time in julian centuries since noon on
January 1, 1900.
The method follows Meese (1982 equation 15.1).  The example reproduces the
example provided by Meeuse (1982 example 15.a), with fractional error 3e-8.
}
\examples{

t <- ISOdatetime(1978, 11, 13, 4, 35, 0, tz="UTC")
jca <- julianCenturyAnomaly(julianDay(t))
cat(format(t), "is Julian Century anomaly", format(jca, digits=8), "\\n")

}
\references{
Meeus, Jean, 1982.  Astronomical formulae for Calculators.
Willmann-Bell. Richmond VA, USA. 201 pages
}
\seealso{
Other things related to astronomy: \code{\link{eclipticalToEquatorial}},
  \code{\link{equatorialToLocalHorizontal}},
  \code{\link{julianDay}}, \code{\link{moonAngle}},
  \code{\link{siderealTime}}, \code{\link{sunAngle}}

Other things related to time: \code{\link{ctimeToSeconds}},
  \code{\link{julianDay}}, \code{\link{numberAsHMS}},
  \code{\link{numberAsPOSIXct}},
  \code{\link{secondsToCtime}},
  \code{\link{unabbreviateYear}}
}
\author{
Dan Kelley
}
\concept{things related to astronomy}
\concept{things related to time}
