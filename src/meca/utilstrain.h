/*	$Id: utilstrain.h,v 1.2 2000-12-29 22:10:37 pwessel Exp $	*/
int trace_cross (double slon,double slat,double eps1,double eps2,double theta,double sscale,double v_width,double h_length,double h_width,double vector_shape,BOOLEAN outline,struct GMT_PEN pen);
void paint_wedge (double x0, double y0, double spin, double spinsig, double sscale, double wedge_amp, double t11,double t12,double t21,double t22, int polygon, int rgb[3], int epolygon, int ergb[3], int outline);
