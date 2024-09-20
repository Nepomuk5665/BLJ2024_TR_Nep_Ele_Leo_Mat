#ifndef CALC_H
#define CALC_H

#define PI 3.14159265359

// Basic arithmetic operations
int calc_sum(int a, int b);
int calc_sub(int a, int b);
int mult(int a, int b);
int divide(int a, int b);

// Area calculations
double flaeche_kreis(double radius);
double flaeche_quadrat(double a);
double flaeche_rechteck(double a, double b);
double flaeche_dreieck(double basis, double hoehe);
double flaeche_trapez(double a, double b, double hoehe);

// Volume calculations
double volumen_kugel(double radius);
double volumen_wuerfel(double a);
double volumen_quader(double a, double b, double hoehe);
double volumen_zylinder(double radius, double hoehe);
double volumen_kegel(double radius, double hoehe);

#endif // CALC_H