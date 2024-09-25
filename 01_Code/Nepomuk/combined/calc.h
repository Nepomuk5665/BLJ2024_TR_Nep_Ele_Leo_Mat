#ifndef CALC_H
#define CALC_H

#define PI 3.14159265359

int addiere(int a, int b);
int subtrahiere(int a, int b);
int multipliziere(int a, int b);
int dividiere(int a, int b);

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

float bmi(int gewicht, int groesse);
float wid1(int alkohol, int gewicht, float geschlecht);
float BMR1(float geschlecht, int gewicht, int groesse, int alter);
float BMR2(float geschlecht, int gewicht, int groesse, int alter);
int schlaf(int aufstehzeit, int schlafzeit);

double sqrt_custom(double number);
int power(int base, int exponent);
unsigned long long int berechne_fakultaet(int n);

#endif