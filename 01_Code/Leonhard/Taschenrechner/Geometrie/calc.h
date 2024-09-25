#ifndef calc_h
#define calc_h

#define PI 3.14159265359

double flaeche_kreis(double radius);
double flaeche_quadrat(double a);
double flaeche_rechteck(double a, double b);
double flaeche_dreieck(double basis, double hoehe);
double flaeche_trapez(double a, double b, double hoehe);

double volumen_kugel(double radius);
double volumen_wuerfel(double a);
double volumen_quader(double a, double b, double hoehe);
double volumen_zylinder(double radius, double hoehe);
double volumen_kegel(double radius, double hoehe);

#endif
