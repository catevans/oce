## vim:textwidth=80:expandtab:shiftwidth=2:softtabstop=2
library(oce)
data(argo)

context("Argo")

test_that("global attributes in metadata", {
          expect_equal(argo[["title"]], "Argo float vertical profile")
          expect_equal(argo[["institution"]], "FR GDAC")
          expect_equal(argo[["source"]], "Argo float")
          expect_equal(argo[["history"]], "2017-07-07T15:50:34Z creation")
          expect_equal(argo[["references"]], "http://www.argodatamgt.org/Documentation")
          expect_equal(argo[["userManualVersion"]], "3.1")
          expect_equal(argo[["conventions"]], "Argo-3.1 CF-1.6")
          expect_equal(argo[["featureType"]], "trajectoryProfile")
})

test_that("[[,argo-method", {
          options(oceEOS="gsw")
          expect_equal(argo[["SA"]][1:2,1:2],
                       structure(c(35.3509423279029, 35.3529478543978, 35.3600216239489,
                                   35.3600133661509), .Dim=c(2L, 2L)))
          expect_equal(argo[["CT"]][1:2,1:2],
                       structure(c(9.69604608349391, 9.69651156306521, 9.58902309316286,
                                   9.58644078639155), .Dim=c(2L, 2L)))
          expect_equal(argo[["sigmaTheta"]][1:2,1:2],
                       structure(c(27.1479134860076, 27.1493888071818, 27.172918709517,
                                   27.173344472757), .Dim=c(2L, 2L)))
          expect_equal(argo[["theta"]][1:2,1:2],
                       structure(c(9.70945684069746, 9.70995897509861, 9.60251640507005,
                                   9.59993195546977), .Dim=c(2L, 2L)))
})

test_that("subset(argo, within=(POLYGON))", {
          ## Labrador Sea (this test will fail if data(argo) is changed)
          nold <- 223
          nnew <- 53
          expect_equal(nold, nchar(argo[["direction"]]))
          expect_equal(c(56, nold), dim(argo[["pressure"]]))
          expect_equal(nold, length(argo[["latitude"]]))
          bdy <- list(x=c(-41.05788, -41.92521, -68.96441, -69.55673),
                      y=c(64.02579, 49.16223, 50.50927, 61.38379))
          argoSubset <- subset(argo, within=bdy)
          expect_equal(nnew, nchar(argoSubset[["direction"]]))
          expect_equal(c(56, nnew), dim(argoSubset[["pressure"]]))
          expect_equal(nnew, length(argoSubset[["latitude"]]))
})

test_that("subset.argo(argo, \"adjusted\") correctly alters metadata and data", {
          a <- subset(argo, "adjusted")
          expect_equal(a@metadata$flags$pressureQC, argo@metadata$flags$pressureAdjustedQC)
          expect_equal(a@metadata$flags$temperatureQC, argo@metadata$flags$temperatureAdjustedQC)
          expect_equal(a@metadata$flags$salinityQC, argo@metadata$flags$salinityAdjustedQC)
          expect_equal(a@metadata$flags$pressure, argo@metadata$flags$pressureAdjusted)
          expect_equal(a@metadata$flags$salinity, argo@metadata$flags$salinityAdjusted)
          expect_equal(a@metadata$flags$temperature, argo@metadata$flags$temperatureAdjusted)
})

test_that("argo [[ handles SA and CT", {
          SA <- argo[["SA"]]
          CT <- argo[["CT"]]
          SP <- argo[["salinityAdjusted"]]
          t <- argo[["temperatureAdjusted"]]
          p <- argo[["pressureAdjusted"]]
          lon <- rep(argo[["longitude"]], each=dim(SP)[1])
          lat <- rep(argo[["latitude"]], each=dim(SP)[1])
          expect_equal(SA, gsw_SA_from_SP(SP=SP, p=p, longitude=lon, latitude=lat))
          expect_equal(CT, gsw_CT_from_t(SA=SA, t=t, p=p))
})

test_that("argo name conversion", {
          table <- "BBP BBP
          BETA_BACKSCATTERING betaBackscattering
          BPHASE_DOXY bphaseOxygen
          CDOM CDOM
          CHLA chlorophyllA
          CNDC conductivity
          CP beamAttenuation
          CYCLE_NUMBER cycleNumber
          DOWN_IRRADIANCE downwellingIrradiance
          DOWNWELLING_PAR downwellingPAR
          DOXY oxygen
          FIT_ERROR_NITRATE fitErrorNitrate
          FLUORESCENCE_CDOM fluorescenceCDOM
          FLUORESCENCE_CHLA fluorescenceChlorophyllA
          MOLAR_DOXY oxygenUncompensated
          NITRATE nitrate
          PH_IN_SITU_FREE pHFree
          PH_IN_SITU_TOTAL pH
          PRES pressure
          RAW_DOWNWELLING_IRRADIANCE rawDownwellingIrradiance
          RAW_DOWNWELLING_PAR rawDownwellingPAR
          RAW_UPWELLING_RADIANCE rawUpwellingRadiance
          TEMP temperature
          TEMP_DOXY temperatureOxygen
          TEMP_NITRATE temperatureNitrate
          TEMP_PH temperaturePH
          TEMP_CPU_CHLA temperatureCPUChlA
          TEMP_SPECTROPHOTOMETER_NITRATE temperatureSpectrophotometerNitrate
          TEMP_VOLTAGE_DOXY temperatureVoltageOxygen
          TILT tilt
          TURBIDITY turbidity
          TRANSMITTANCE_PARTICLE_BEAM_ATTENUATION transmittanceParticleBeamAttenuation
          UP_RADIANCE upwellingRadiance
          UV_INTENSITY_DARK_NITRATE UVIntensityDarkNitrate
          UV_INTENSITY_NITRATE UVIntensityNitrate
          VRS_PH VRSpH
          "

          ## REMAINING TO DO--
          ## see https://github.com/dankelley/oce/issues/1122
          ##
          ## BPHASE_DOXY2
          ## C1PHASE_DOXY
          ## C2PHASE_DOXY
          ## FREQUENCY_DOXY
          ## HUMIDITY_NITRATE
          ## IB_PH
          ## PHASE_DELAY_DOXY
          ## RPHASE_DOXY
          ## TPHASE_DOXY

          a <- read.table(text=table, header=FALSE, stringsAsFactors=FALSE)
          expect_equal(argoNames2oceNames(a$V1), a$V2)
          expect_equal(argoNames2oceNames(paste(a$V1, "123", sep="")), paste(a$V2, "123", sep=""))
})

