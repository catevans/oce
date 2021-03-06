% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ctd.sbe.R
\name{read.ctd.sbe}
\alias{read.ctd.sbe}
\title{Read a Seabird CTD File}
\usage{
read.ctd.sbe(file, columns = NULL, station = NULL, missingValue,
  deploymentType = "unknown", monitor = FALSE,
  debug = getOption("oceDebug"), processingLog, ...)
}
\arguments{
\item{file}{A connection or a character string giving the name of the file to
load.  For \code{read.ctd.sbe()} and \code{read.ctd.woce()}, this may be a
wildcard (e.g. \code{"*.cnv"} or \code{"*.csv"}) in which case the return
value is a vector containing CTD objects created by reading the files from
\code{\link{list.files}} with \code{pattern} set to the specified wildcard
pattern.}

\item{columns}{An optional \code{\link{list}} that can be used to convert unrecognized
data names to resultant variable names.  This is used only by
\code{\link{read.ctd.sbe}} and \code{\link{read.ctd.odf}}. For example,
if a data file named salinity as \code{"SAL"}, then using
\preformatted{
d <- read.ctd(f, columns=list(
    salinity=list(name="SAL",
                  unit=list(unit=expression(),
                  scale="PSS-78"))))
}
would assign the \code{"SAL"} column to the \code{salinity} entry in the data
slot of the CTD object returned by the \code{read.*} function.}

\item{station}{Optional character string containing an identifying name or
number for the station. This can be useful if the routine cannot determine the
name automatically, or if another name is preferred.}

\item{missingValue}{Optional missing-value flag; data matching this value will
be set to \code{NA} upon reading. If this is provided, then it overrules any
missing-value flag found in the data. For Seabird (\code{.cnv}) files, there is
usually no need to set \code{missingValue}, because it can be inferred from the
header (typically as -9.990e-29). Set \code{missingValue=NULL} to turn off
missing-value detection, even in \code{.cnv} files that contain missing-value
codes in their headers. If \code{missingValue} is not specified,
then an attempt is made to infer such a value from the data, by testing
whether salinity and/or temperature has a minimum that is under -8 in value;
this should catch common values in files, without false positives. A warning
will be issued in this case, and a note inserted in the processing log of
the return value.}

\item{deploymentType}{character string indicating the type of deployment. Use
\code{"unknown"} if this is not known, \code{"profile"} for a profile (in
which the data were acquired during a downcast, while the device was lowered
into the water column, perhaps also including an upcast; \code{"moored"} if
the device is installed on a fixed mooring, \code{"thermosalinograph"} (or
\code{"tsg"}) if the device is mounted on a moving vessel, to record
near-surface properties, or \code{"towyo"} if the device is repeatedly
lowered and raised.}

\item{monitor}{Boolean, set to \code{TRUE} to provide an indication of
progress.  This is useful if \code{filename} is a wildcard.}

\item{debug}{An integer specifying whether debugging information is
to be printed during the processing. This is a general parameter that
is used by many \code{oce} functions. Generally, setting \code{debug=0}
turns off the printing, while higher values suggest that more information
be printed.}

\item{processingLog}{If provided, the action item to be stored in the log.
This is typically only provided for internal calls; the default that it provides is
better for normal calls by a user.}

\item{...}{additional arguments, passed to called routines.}
}
\value{
An object of \code{\link{ctd-class}}. The details of the contents
depend on the source file. The \code{metadata} slot is particularly 
variable across data formats, because the meta-information provided
in those formats varies widely.
}
\description{
Read a Seabird CTD File
}
\details{
This function reads files stored in Seabird \code{.cnv} format.
Note that these files can contain multiple sensors for a given field. For example,
the file might contain a column named \code{t090C} for one
temperature sensor and \code{t190C} for a second. The first will be denoted
\code{temperature} in the \code{data} slot of the return value, and the second
will be denoted \code{temperature1}. This means that the first sensor
will be used in any future processing that accesses \code{temperature}. This
is for convenience of processing, and it does not pose a limitation, because the
data from the second sensor are also available as e.g. \code{x[["temperature1"]]},
where \code{x} is the name of the returned value.  For the details of the
mapping from \code{.cnv} names to \code{ctd} names, see \code{\link{cnvName2oceName}}.

The original data names as stored in \code{file} are stored within the \code{metadata}
slot as \code{dataNamesOriginal}, and are displayed with \code{summary} alongside the
numerical summary. See the Appendix VI of [2] for the meanings of these
names (in the "Short Name" column of the table spanning pages 161 through 172).
}
\section{A note on sampling times}{

Until November of 2018,
there was a possibility for great confusion in the storage
of the time entries within the \code{data} slot, because \code{read.ctd.sbe}
renamed each of the ten variants of time (see [2] for a list)
as \code{"time"} in the \code{data} slot of the returned value.
For CTD profiles, this was perhaps not a great problem, but it could
lead to great confusion for moored data. Therefore, a change to \code{read.ctd.sbe} was
made, so that it would Seabird times, using the \code{start_time} entry in
the CNV file header (which is stored as \code{startTime} in the object
\code{metadata} slot), along with specific time columns as follows
(and as documented, with uneven clarity, in the
SBE Seasoft data processing manual, revision 7.26.8, Appendix VI):
\code{timeS} (seconds elapsed since \code{start_time}),
\code{timeM} (minutes elapsed since \code{start_time}),
\code{timeH} (hours elapsed since \code{start_time}),
\code{timeJ} (Julian days since the start of the year of the first observation),
\code{timeN} (NMEA-based time, in seconds past Jan 1, 1970),
\code{timeQ} (NMEA-based time, in seconds past Jan 1, 2000),
\code{timeK} (NMEA-based time, in seconds past Jan 1, 2000),
\code{timeJV2} (as \code{timeJ}),
\code{timeSCP} (as \code{timeJ}),
and
\code{timeY} (computer time, in seconds past Jan 1, 1970).
NOTE: not all of these times have been tested properly, and so users
are asked to report incorrect times, so that \code{read.ctd.sbe} can
be improved.
}

\section{A note on scales}{

The user might encounter data files with a variety of scales for temperature and
salinity. Oce keeps track of these scales in the units it sets up for the stored
variables. For example, if \code{A} is a CTD object, then
\code{A[["temperatureUnit"]]$scale} is a character string that will indicate the scale.
Modern-day data will have \code{"ITS-90"} for that scale, and old data may have
\code{"IPTS-68"}. The point of saving the scale in this way is so that the various
formulas that deal with water properties can account for the scale, e.g. converting
from numerical values saved on the \code{"IPTS-68"} scale to the newer scale, using
\code{\link{T90fromT68}} before doing calculations that are expressed in
terms of the \code{"ITS-90"} scale. This is taken care of by retrieving temperatures
with the accessor function, e.g. writing \code{A[["temperature"]]} will either
retrieve the stored values (if the scale is ITS-90) or converted values (if
the scale is IPTS-68). Even though this procedure should work, users who
really care about the details of their data are well-advised to do a couple
of tests after examining the first data line of their data file in an editor.
Note that reading a file that contains IPTS-68 temperatures produces a warning.
}

\examples{
f <- system.file("extdata", "ctd.cnv", package="oce")
## Read the file in the normal way
d <- read.ctd(f)
## Read an imaginary file, in which salinity is named 'salt'
d <- read.ctd(f, columns=list(
  salinity=list(name="salt", unit=list(unit=expression(), scale="PSS-78"))))

}
\references{
1. The Sea-Bird SBE 19plus profiler is described at
\code{http://www.seabird.com/products/spec_sheets/19plusdata.htm}.  Some more
information is given in the Sea-Bird data-processing manual
(next item).

2. A SBE data processing manual was once at
\code{http://www.seabird.com/document/sbe-data-processing-manual},
but as of summer 2018, this no longer seems to be provided by SeaBird.
A web search will turn up copies of the manual that have been put
online by various research groups and data-archiving agencies.
As of 2018-07-05, the latest version was named
\code{SBEDataProcessing_7.26.4.pdf} and had release date 12/08/2017,
and this was the reference version used in coding \code{oce}.
}
\seealso{
Other things related to \code{ctd} data: \code{\link{[[,ctd-method}},
  \code{\link{[[<-,ctd-method}}, \code{\link{as.ctd}},
  \code{\link{cnvName2oceName}}, \code{\link{ctd-class}},
  \code{\link{ctdDecimate}}, \code{\link{ctdFindProfiles}},
  \code{\link{ctdRaw}}, \code{\link{ctdTrim}},
  \code{\link{ctd}}, \code{\link{handleFlags,ctd-method}},
  \code{\link{initialize,ctd-method}},
  \code{\link{initializeFlagScheme,ctd-method}},
  \code{\link{oceNames2whpNames}},
  \code{\link{oceUnits2whpUnits}},
  \code{\link{plot,ctd-method}}, \code{\link{plotProfile}},
  \code{\link{plotScan}}, \code{\link{plotTS}},
  \code{\link{read.ctd.itp}}, \code{\link{read.ctd.odf}},
  \code{\link{read.ctd.woce.other}},
  \code{\link{read.ctd.woce}}, \code{\link{read.ctd}},
  \code{\link{setFlags,ctd-method}},
  \code{\link{subset,ctd-method}},
  \code{\link{summary,ctd-method}},
  \code{\link{woceNames2oceNames}},
  \code{\link{woceUnit2oceUnit}}, \code{\link{write.ctd}}
}
\author{
Dan Kelley and Clark Richards
}
\concept{things related to \code{ctd} data}
