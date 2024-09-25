#include <stdio.h>
#include <string.h>
#include "calc.h"

int main() {
    char auswahl[50];
    double a, b, hoehe, radius;

    printf("Wähle eine Berechnung aus:\n");
    printf("1. flaeche_kreis\n");
    printf("2. flaeche_quadrat\n");
    printf("3. flaeche_rechteck\n");
    printf("4. flaeche_dreieck\n");
    printf("5. flaeche_trapez\n");
    printf("6. volumen_kugel\n");
    printf("7. volumen_wuerfel\n");
    printf("8. volumen_quader\n");
    printf("9. volumen_zylinder\n");
    printf("10. volumen_kegel\n");

    printf("\nBitte gib den Namen der Berechnung ein: ");
    scanf("%s", auswahl);

    if (strcmp(auswahl, "flaeche_kreis") == 0) {
        printf("Gib den Radius des Kreises ein: ");
        scanf("%lf", &radius);
        printf("Die Fläche des Kreises beträgt: %.2lf\n", flaeche_kreis(radius));

    } else if (strcmp(auswahl, "flaeche_quadrat") == 0) {
        printf("Gib die Seitenlänge des Quadrats ein: ");
        scanf("%lf", &a);
        printf("Die Fläche des Quadrats beträgt: %.2lf\n", flaeche_quadrat(a));

    } else if (strcmp(auswahl, "flaeche_rechteck") == 0) {
        printf("Gib die Länge und Breite des Rechtecks ein: ");
        scanf("%lf %lf", &a, &b);
        printf("Die Fläche des Rechtecks beträgt: %.2lf\n", flaeche_rechteck(a, b));

    } else if (strcmp(auswahl, "flaeche_dreieck") == 0) {
        printf("Gib die Basis und die Höhe des Dreiecks ein: ");
        scanf("%lf %lf", &a, &hoehe);
        printf("Die Fläche des Dreiecks beträgt: %.2lf\n", flaeche_dreieck(a, hoehe));

    } else if (strcmp(auswahl, "flaeche_trapez") == 0) {
        printf("Gib die beiden Basen und die Höhe des Trapezes ein: ");
        scanf("%lf %lf %lf", &a, &b, &hoehe);
        printf("Die Fläche des Trapezes beträgt: %.2lf\n", flaeche_trapez(a, b, hoehe));

    } else if (strcmp(auswahl, "volumen_kugel") == 0) {
        printf("Gib den Radius der Kugel ein: ");
        scanf("%lf", &radius);
        printf("Das Volumen der Kugel beträgt: %.2lf\n", volumen_kugel(radius));

    } else if (strcmp(auswahl, "volumen_wuerfel") == 0) {
        printf("Gib die Seitenlänge des Würfels ein: ");
        scanf("%lf", &a);
        printf("Das Volumen des Würfels beträgt: %.2lf\n", volumen_wuerfel(a));

    } else if (strcmp(auswahl, "volumen_quader") == 0) {
        printf("Gib die Länge, Breite und Höhe des Quaders ein: ");
        scanf("%lf %lf %lf", &a, &b, &hoehe);
        printf("Das Volumen des Quaders beträgt: %.2lf\n", volumen_quader(a, b, hoehe));

    } else if (strcmp(auswahl, "volumen_zylinder") == 0) {
        printf("Gib den Radius und die Höhe des Zylinders ein: ");
        scanf("%lf %lf", &radius, &hoehe);
        printf("Das Volumen des Zylinders beträgt: %.2lf\n", volumen_zylinder(radius, hoehe));

    } else if (strcmp(auswahl, "volumen_kegel") == 0) {
        printf("Gib den Radius und die Höhe des Kegels ein: ");
        scanf("%lf %lf", &radius, &hoehe);
        printf("Das Volumen des Kegels beträgt: %.2lf\n", volumen_kegel(radius, hoehe));

    } else {
        printf("Ungültige Auswahl!\n");
    }

    return 0;
}
