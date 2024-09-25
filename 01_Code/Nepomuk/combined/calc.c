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

// Science of Life Funktionen
float bmi(int gewicht, int groesse) {
    return (float)gewicht / ((float)groesse/100 * (float)groesse/100);
}

float wid1(int alkohol, int gewicht, float geschlecht) {
    return (float)alkohol / (gewicht * geschlecht);
}

float BMR1(float geschlecht, int gewicht, int groesse, int alter) {
    float b = 13.4;
    float c = 4.8;
    float d = 5.7;
    return geschlecht + (b * gewicht) + (c * groesse) - (d * alter);
}

float BMR2(float geschlecht, int gewicht, int groesse, int alter) {
    float b = 9.2;
    float c = 3.1;
    float d = 4.3;
    return geschlecht + (b * gewicht) + (c * groesse) - (d * alter);
}

int schlaf(int aufstehzeit, int schlafzeit) {
    int c = 12;
    return (aufstehzeit + c) - schlafzeit;
}

// Newton-Raphson-Verfahren zur Berechnung der Quadratwurzel
double sqrt_custom(double number) {
    if (number < 0) {
        return -1; // Fehler: Keine Wurzel für negative Zahlen
    }

    double guess = number / 2.0; // Anfangsschätzung
    double epsilon = 0.00001;    // Toleranz für das Ergebnis

    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }

    return guess;
}

// Funktion zur Berechnung der Potenz (Basis hoch Exponent)
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}