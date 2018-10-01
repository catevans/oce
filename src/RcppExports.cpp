// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// do_adv_vector_time
NumericVector do_adv_vector_time(NumericVector vvdStart, NumericVector vsdStart, NumericVector vsdTime, NumericVector vvdhStart, NumericVector vvdhTime, NumericVector n, NumericVector f);
RcppExport SEXP _oce_do_adv_vector_time(SEXP vvdStartSEXP, SEXP vsdStartSEXP, SEXP vsdTimeSEXP, SEXP vvdhStartSEXP, SEXP vvdhTimeSEXP, SEXP nSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vvdStart(vvdStartSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vsdStart(vsdStartSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vsdTime(vsdTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vvdhStart(vvdhStartSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vvdhTime(vvdhTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_adv_vector_time(vvdStart, vsdStart, vsdTime, vvdhStart, vvdhTime, n, f));
    return rcpp_result_gen;
END_RCPP
}
// do_amsr_average
RawVector do_amsr_average(RawVector a, RawVector b);
RcppExport SEXP _oce_do_amsr_average(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< RawVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(do_amsr_average(a, b));
    return rcpp_result_gen;
END_RCPP
}
// do_amsr_composite
RawVector do_amsr_composite(RawVector a, IntegerVector dim);
RcppExport SEXP _oce_do_amsr_composite(SEXP aSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(do_amsr_composite(a, dim));
    return rcpp_result_gen;
END_RCPP
}
// do_approx3d
NumericVector do_approx3d(NumericVector x, NumericVector y, NumericVector z, NumericVector f, NumericVector xout, NumericVector yout, NumericVector zout);
RcppExport SEXP _oce_do_approx3d(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP fSEXP, SEXP xoutSEXP, SEXP youtSEXP, SEXP zoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xout(xoutSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yout(youtSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zout(zoutSEXP);
    rcpp_result_gen = Rcpp::wrap(do_approx3d(x, y, z, f, xout, yout, zout));
    return rcpp_result_gen;
END_RCPP
}
// bilinearInterp
NumericVector bilinearInterp(NumericVector x, NumericVector y, NumericVector gx, NumericVector gy, NumericMatrix g);
RcppExport SEXP _oce_bilinearInterp(SEXP xSEXP, SEXP ySEXP, SEXP gxSEXP, SEXP gySEXP, SEXP gSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gx(gxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gy(gySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type g(gSEXP);
    rcpp_result_gen = Rcpp::wrap(bilinearInterp(x, y, gx, gy, g));
    return rcpp_result_gen;
END_RCPP
}
// do_curl1
List do_curl1(NumericMatrix u, NumericMatrix v, NumericVector x, NumericVector y, NumericVector geographical);
RcppExport SEXP _oce_do_curl1(SEXP uSEXP, SEXP vSEXP, SEXP xSEXP, SEXP ySEXP, SEXP geographicalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type u(uSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type geographical(geographicalSEXP);
    rcpp_result_gen = Rcpp::wrap(do_curl1(u, v, x, y, geographical));
    return rcpp_result_gen;
END_RCPP
}
// do_curl2
List do_curl2(NumericMatrix u, NumericMatrix v, NumericVector x, NumericVector y, NumericVector geographical);
RcppExport SEXP _oce_do_curl2(SEXP uSEXP, SEXP vSEXP, SEXP xSEXP, SEXP ySEXP, SEXP geographicalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type u(uSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type geographical(geographicalSEXP);
    rcpp_result_gen = Rcpp::wrap(do_curl2(u, v, x, y, geographical));
    return rcpp_result_gen;
END_RCPP
}
// do_biosonics_ping
List do_biosonics_ping(RawVector bytes, NumericVector Rspp, NumericVector Rns, NumericVector Rtype);
RcppExport SEXP _oce_do_biosonics_ping(SEXP bytesSEXP, SEXP RsppSEXP, SEXP RnsSEXP, SEXP RtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type bytes(bytesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Rspp(RsppSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Rns(RnsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Rtype(RtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(do_biosonics_ping(bytes, Rspp, Rns, Rtype));
    return rcpp_result_gen;
END_RCPP
}
// do_fill_gap_1d
NumericVector do_fill_gap_1d(NumericVector x, NumericVector rule);
RcppExport SEXP _oce_do_fill_gap_1d(SEXP xSEXP, SEXP ruleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rule(ruleSEXP);
    rcpp_result_gen = Rcpp::wrap(do_fill_gap_1d(x, rule));
    return rcpp_result_gen;
END_RCPP
}
// do_geoddist_alongpath
NumericVector do_geoddist_alongpath(NumericVector lon, NumericVector lat, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geoddist_alongpath(SEXP lonSEXP, SEXP latSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lon(lonSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geoddist_alongpath(lon, lat, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_geoddist
NumericVector do_geoddist(NumericVector lon1, NumericVector lat1, NumericVector lon2, NumericVector lat2, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geoddist(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geoddist(lon1, lat1, lon2, lat2, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_geod_xy
List do_geod_xy(NumericVector lon, NumericVector lat, NumericVector lonr, NumericVector latr, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geod_xy(SEXP lonSEXP, SEXP latSEXP, SEXP lonrSEXP, SEXP latrSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lon(lonSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonr(lonrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latr(latrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geod_xy(lon, lat, lonr, latr, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_geod_xy_inverse
List do_geod_xy_inverse(NumericVector x, NumericVector y, NumericVector lonr, NumericVector latr, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geod_xy_inverse(SEXP xSEXP, SEXP ySEXP, SEXP lonrSEXP, SEXP latrSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonr(lonrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latr(latrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geod_xy_inverse(x, y, lonr, latr, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_get_bit
NumericVector do_get_bit(RawVector buf, int bit);
RcppExport SEXP _oce_do_get_bit(SEXP bufSEXP, SEXP bitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type buf(bufSEXP);
    Rcpp::traits::input_parameter< int >::type bit(bitSEXP);
    rcpp_result_gen = Rcpp::wrap(do_get_bit(buf, bit));
    return rcpp_result_gen;
END_RCPP
}
// do_gradient
List do_gradient(NumericMatrix m, NumericVector x, NumericVector y);
RcppExport SEXP _oce_do_gradient(SEXP mSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(do_gradient(m, x, y));
    return rcpp_result_gen;
END_RCPP
}
// do_interp_barnes
List do_interp_barnes(NumericVector x, NumericVector y, NumericVector z, NumericVector w, NumericVector xg, NumericVector yg, NumericVector xr, NumericVector yr, NumericVector gamma, NumericVector iterations);
RcppExport SEXP _oce_do_interp_barnes(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP wSEXP, SEXP xgSEXP, SEXP ygSEXP, SEXP xrSEXP, SEXP yrSEXP, SEXP gammaSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xg(xgSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yg(ygSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xr(xrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type iterations(iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(do_interp_barnes(x, y, z, w, xg, yg, xr, yr, gamma, iterations));
    return rcpp_result_gen;
END_RCPP
}
// do_landsat_transpose_flip
RawMatrix do_landsat_transpose_flip(RawMatrix m);
RcppExport SEXP _oce_do_landsat_transpose_flip(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(do_landsat_transpose_flip(m));
    return rcpp_result_gen;
END_RCPP
}
// do_landsat_numeric_to_bytes
List do_landsat_numeric_to_bytes(NumericMatrix m, IntegerVector bits);
RcppExport SEXP _oce_do_landsat_numeric_to_bytes(SEXP mSEXP, SEXP bitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type bits(bitsSEXP);
    rcpp_result_gen = Rcpp::wrap(do_landsat_numeric_to_bytes(m, bits));
    return rcpp_result_gen;
END_RCPP
}
// do_ldc_ad2cp_in_file
List do_ldc_ad2cp_in_file(CharacterVector filename, IntegerVector from, IntegerVector to, IntegerVector by);
RcppExport SEXP _oce_do_ldc_ad2cp_in_file(SEXP filenameSEXP, SEXP fromSEXP, SEXP toSEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type from(fromSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type to(toSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(do_ldc_ad2cp_in_file(filename, from, to, by));
    return rcpp_result_gen;
END_RCPP
}
// do_ldc_rdi_in_file
List do_ldc_rdi_in_file(StringVector filename, IntegerVector from, IntegerVector to, IntegerVector by, IntegerVector mode, IntegerVector debug);
RcppExport SEXP _oce_do_ldc_rdi_in_file(SEXP filenameSEXP, SEXP fromSEXP, SEXP toSEXP, SEXP bySEXP, SEXP modeSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type from(fromSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type to(toSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type by(bySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(do_ldc_rdi_in_file(filename, from, to, by, mode, debug));
    return rcpp_result_gen;
END_RCPP
}
// do_matrix_smooth
NumericMatrix do_matrix_smooth(NumericMatrix mat);
RcppExport SEXP _oce_do_matrix_smooth(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(do_matrix_smooth(mat));
    return rcpp_result_gen;
END_RCPP
}
// do_oceApprox
NumericVector do_oceApprox(NumericVector x, NumericVector y, NumericVector xout, NumericVector method);
RcppExport SEXP _oce_do_oceApprox(SEXP xSEXP, SEXP ySEXP, SEXP xoutSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xout(xoutSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(do_oceApprox(x, y, xout, method));
    return rcpp_result_gen;
END_RCPP
}
// do_oce_convolve
NumericVector do_oce_convolve(NumericVector x, NumericVector f, NumericVector end);
RcppExport SEXP _oce_do_oce_convolve(SEXP xSEXP, SEXP fSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(do_oce_convolve(x, f, end));
    return rcpp_result_gen;
END_RCPP
}
// do_oce_filter
NumericVector do_oce_filter(NumericVector x, NumericVector a, NumericVector b);
RcppExport SEXP _oce_do_oce_filter(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(do_oce_filter(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// do_runlm
List do_runlm(NumericVector x, NumericVector y, NumericVector xout, NumericVector window, NumericVector L);
RcppExport SEXP _oce_do_runlm(SEXP xSEXP, SEXP ySEXP, SEXP xoutSEXP, SEXP windowSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xout(xoutSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type window(windowSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(do_runlm(x, y, xout, window, L));
    return rcpp_result_gen;
END_RCPP
}
// do_sfm_enu
List do_sfm_enu(NumericVector heading, NumericVector pitch, NumericVector roll, NumericVector starboard, NumericVector forward, NumericVector mast);
RcppExport SEXP _oce_do_sfm_enu(SEXP headingSEXP, SEXP pitchSEXP, SEXP rollSEXP, SEXP starboardSEXP, SEXP forwardSEXP, SEXP mastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type heading(headingSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pitch(pitchSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type roll(rollSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type starboard(starboardSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type forward(forwardSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mast(mastSEXP);
    rcpp_result_gen = Rcpp::wrap(do_sfm_enu(heading, pitch, roll, starboard, forward, mast));
    return rcpp_result_gen;
END_RCPP
}
// do_ldc_sontek_adp
IntegerVector do_ldc_sontek_adp(RawVector buf, IntegerVector have_ctd, IntegerVector have_gps, IntegerVector have_bottom_track, IntegerVector pcadp, IntegerVector max);
RcppExport SEXP _oce_do_ldc_sontek_adp(SEXP bufSEXP, SEXP have_ctdSEXP, SEXP have_gpsSEXP, SEXP have_bottom_trackSEXP, SEXP pcadpSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type buf(bufSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type have_ctd(have_ctdSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type have_gps(have_gpsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type have_bottom_track(have_bottom_trackSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type pcadp(pcadpSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(do_ldc_sontek_adp(buf, have_ctd, have_gps, have_bottom_track, pcadp, max));
    return rcpp_result_gen;
END_RCPP
}
// do_epic_time_to_ymdhms
List do_epic_time_to_ymdhms(IntegerVector julianDay, IntegerVector millisecond);
RcppExport SEXP _oce_do_epic_time_to_ymdhms(SEXP julianDaySEXP, SEXP millisecondSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type julianDay(julianDaySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type millisecond(millisecondSEXP);
    rcpp_result_gen = Rcpp::wrap(do_epic_time_to_ymdhms(julianDay, millisecond));
    return rcpp_result_gen;
END_RCPP
}
// do_trap
NumericVector do_trap(NumericVector x, NumericVector y, NumericVector type);
RcppExport SEXP _oce_do_trap(SEXP xSEXP, SEXP ySEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(do_trap(x, y, type));
    return rcpp_result_gen;
END_RCPP
}
// trim_ts
List trim_ts(NumericVector x, NumericVector xlim, NumericVector extra);
RcppExport SEXP _oce_trim_ts(SEXP xSEXP, SEXP xlimSEXP, SEXP extraSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xlim(xlimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type extra(extraSEXP);
    rcpp_result_gen = Rcpp::wrap(trim_ts(x, xlim, extra));
    return rcpp_result_gen;
END_RCPP
}
