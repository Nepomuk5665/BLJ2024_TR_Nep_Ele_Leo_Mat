#ifndef CALC_H
#define CALC_H

#define PI 3.14159265359

// Grundlegende arithmetische Operationen
int addiere(int a, int b);
int subtrahiere(int a, int b);
int multipliziere(int a, int b);
int dividiere(int a, int b);

// Flächenberechnungen
double flaeche_kreis(double radius);
double flaeche_quadrat(double a);
double flaeche_rechteck(double a, double b);
double flaeche_dreieck(double basis, double hoehe);
double flaeche_trapez(double a, double b, double hoehe);

// Volumenberechnungen
double volumen_kugel(double radius);
double volumen_wuerfel(double a);
double volumen_quader(double a, double b, double hoehe);
double volumen_zylinder(double radius, double hoehe);
double volumen_kegel(double radius, double hoehe);

// Science of Life Funktionen
float bmi(int a, int b);
float wid1(int a, int b, float r);
float BMR1(float a, int e, int f, int g);
float BMR2(float a, int e, int f, int g);
int schlaf(int a, int b);

#endif // CALC_H