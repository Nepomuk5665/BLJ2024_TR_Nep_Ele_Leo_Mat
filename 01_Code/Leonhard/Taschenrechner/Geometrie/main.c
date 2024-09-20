#include <stdio.h>

#define PI 3.14159265359  // Wir definieren PI selbst

// Funktionen zur Flächenberechnung
if (c == flaeche_kreis)
double flaeche_kreis(double radius) {
    return PI * radius * radius;  // Fläche des Kreises: PI * r^2
}

double flaeche_quadrat(double a) {
    return a * a;  // Fläche des Quadrats: a^2
}

double flaeche_rechteck(double a, double b) {
    return a * b;  // Fläche des Rechtecks: a * b
}

double flaeche_dreieck(double basis, double hoehe) {
    return 0.5 * basis * hoehe;  // Fläche des Dreiecks: (1/2) * b * h
}

double flaeche_trapez(double a, double b, double hoehe) {
    return 0.5 * (a + b) * hoehe;  // Fläche des Trapezes: (1/2) * (a + b) * h
}

// Funktionen zur Volumenberechnung

double volumen_kugel(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;  // Volumen der Kugel: (4/3) * PI * r^3
}

double volumen_wuerfel(double a) {
    return a * a * a;  // Volumen des Würfels: a^3
}

double volumen_quader(double a, double b, double hoehe) {
    return a * b * hoehe;  // Volumen des Quaders: a * b * h
}

double volumen_zylinder(double radius, double hoehe) {
    return PI * radius * radius * hoehe;  // Volumen des Zylinders: PI * r^2 * h
}

double volumen_kegel(double radius, double hoehe) {
    return (1.0 / 3.0) * PI * radius * radius * hoehe;  // Volumen des Kegels: (1/3) * PI * r^2 * h
}

// Hauptprogramm zur Demonstration

int main() {
    // Beispielwerte
    double radius = 3.0;
    double a = 4.0;
    double b = 5.0;
    double hoehe = 6.0;


    char type;

    printf("Was braucht du für ein Mass?");
    scanf("%c", &type);

    // Flächenberechnungen
    printf("Fläche des Kreises: %.2lf\n", flaeche_kreis(radius));
    printf("Fläche des Quadrats: %.2lf\n", flaeche_quadrat(a));
    printf("Fläche des Rechtecks: %.2lf\n", flaeche_rechteck(a, b));
    printf("Fläche des Dreiecks: %.2lf\n", flaeche_dreieck(b, hoehe));
    printf("Fläche des Trapezes: %.2lf\n", flaeche_trapez(a, b, hoehe));

    // Volumenberechnungen
    printf("Volumen der Kugel: %.2lf\n", volumen_kugel(radius));
    printf("Volumen des Würfels: %.2lf\n", volumen_wuerfel(a));
    printf("Volumen des Quaders: %.2lf\n", volumen_quader(a, b, hoehe));
    printf("Volumen des Zylinders: %.2lf\n", volumen_zylinder(radius, hoehe));
    printf("Volumen des Kegels: %.2lf\n", volumen_kegel(radius, hoehe));

    return 0;
}
