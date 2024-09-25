#include "calc.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Grundlegende arithmetische Operationen
int addiere(int a, int b) {
    return a + b;
}

int subtrahiere(int a, int b) {
    return a - b;
}

int multipliziere(int a, int b) {
    return a * b;
}

int dividiere(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}

// Flächenberechnungen
double flaeche_kreis(double radius) {
    return PI * radius * radius;
}

double flaeche_quadrat(double a) {
    return a * a;
}

double flaeche_rechteck(double a, double b) {
    return a * b;
}

double flaeche_dreieck(double basis, double hoehe) {
    return 0.5 * basis * hoehe;
}

double flaeche_trapez(double a, double b, double hoehe) {
    return 0.5 * (a + b) * hoehe;
}

// Volumenberechnungen
double volumen_kugel(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

double volumen_wuerfel(double a) {
    return a * a * a;
}

double volumen_quader(double a, double b, double hoehe) {
    return a * b * hoehe;
}

double volumen_zylinder(double radius, double hoehe) {
    return PI * radius * radius * hoehe;
}

double volumen_kegel(double radius, double hoehe) {
    return (1.0 / 3.0) * PI * radius * radius * hoehe;
}