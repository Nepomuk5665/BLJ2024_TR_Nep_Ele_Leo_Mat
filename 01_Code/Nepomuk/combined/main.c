#include <stdio.h>
#include <string.h>
#include "calc.h"

void zeige_menue() {
    printf("\nWillkommen beim besten Taschenrechner!\n");
    printf("Wähle mit der Zahl, was du machen willst:\n");
    printf("1. Addieren\n");
    printf("2. Subtrahieren\n");
    printf("3. Multiplizieren\n");
    printf("4. Dividieren\n");
    printf("5. Flächenberechnungen\n");
    printf("6. Volumenberechnungen\n");
    printf("7. Mathematischen Ausdruck auswerten\n");
    printf("8. Lineare Funktionstabelle generieren\n");
    printf("9. Beenden\n");
}

void bearbeite_grundoperation(int operation) {
    int a, b, ergebnis;
    printf("Erste Zahl: ");
    scanf("%d", &a);
    printf("Zweite Zahl: ");
    scanf("%d", &b);

    switch(operation) {
        case 1: ergebnis = addiere(a, b); break;
        case 2: ergebnis = subtrahiere(a, b); break;
        case 3: ergebnis = multipliziere(a, b); break;
        case 4:
            if (b != 0) {
                ergebnis = dividiere(a, b);
            } else {
                printf("Fehler: Division durch Null!\n");
                return;
            }
            break;
    }
    printf("Ergebnis: %d\n", ergebnis);
}

void bearbeite_flaechenberechnungen() {
    int wahl;
    double ergebnis, a, b, h;

    printf("\nFlächenberechnungen:\n");
    printf("1. Kreis\n2. Quadrat\n3. Rechteck\n4. Dreieck\n5. Trapez\n");
    printf("Wähle eine Form: ");
    scanf("%d", &wahl);

    switch(wahl) {
        case 1:
            printf("Radius: ");
            scanf("%lf", &a);
            ergebnis = flaeche_kreis(a);
            break;
        case 2:
            printf("Seitenlänge: ");
            scanf("%lf", &a);
            ergebnis = flaeche_quadrat(a);
            break;
        case 3:
            printf("Länge: ");
            scanf("%lf", &a);
            printf("Breite: ");
            scanf("%lf", &b);
            ergebnis = flaeche_rechteck(a, b);
            break;
        case 4:
            printf("Basis: ");
            scanf("%lf", &a);
            printf("Höhe: ");
            scanf("%lf", &h);
            ergebnis = flaeche_dreieck(a, h);
            break;
        case 5:
            printf("Seite a: ");
            scanf("%lf", &a);
            printf("Seite b: ");
            scanf("%lf", &b);
            printf("Höhe: ");
            scanf("%lf", &h);
            ergebnis = flaeche_trapez(a, b, h);
            break;
        default:
            printf("Ungültige Auswahl\n");
            return;
    }
    printf("Fläche: %.2f\n", ergebnis);
}

void bearbeite_volumenberechnungen() {
    int wahl;
    double ergebnis, a, b, h, r;

    printf("\nVolumenberechnungen:\n");
    printf("1. Kugel\n2. Würfel\n3. Quader\n4. Zylinder\n5. Kegel\n");
    printf("Wähle eine Form: ");
    scanf("%d", &wahl);

    switch(wahl) {
        case 1:
            printf("Radius: ");
            scanf("%lf", &r);
            ergebnis = volumen_kugel(r);
            break;
        case 2:
            printf("Seitenlänge: ");
            scanf("%lf", &a);
            ergebnis = volumen_wuerfel(a);
            break;
        case 3:
            printf("Länge: ");
            scanf("%lf", &a);
            printf("Breite: ");
            scanf("%lf", &b);
            printf("Höhe: ");
            scanf("%lf", &h);
            ergebnis = volumen_quader(a, b, h);
            break;
        case 4:
            printf("Radius: ");
            scanf("%lf", &r);
            printf("Höhe: ");
            scanf("%lf", &h);
            ergebnis = volumen_zylinder(r, h);
            break;
        case 5:
            printf("Radius: ");
            scanf("%lf", &r);
            printf("Höhe: ");
            scanf("%lf", &h);
            ergebnis = volumen_kegel(r, h);
            break;
        default:
            printf("Ungültige Auswahl\n");
            return;
    }
    printf("Volumen: %.2f\n", ergebnis);
}

void bearbeite_ausdrucksauswertung() {
    char ausdruck[MAX_AUSDRUCK_LAENGE];
    printf("Gib einen mathematischen Ausdruck ein (max %d Zeichen): ", MAX_AUSDRUCK_LAENGE - 1);
    scanf(" %[^\n]", ausdruck);
    double ergebnis = berechne_ausdruck(ausdruck);
    printf("Ergebnis: %.2f\n", ergebnis);
}

void bearbeite_lineare_funktionstabelle() {
    double m, b;
    int anzahl_punkte;
    printf("Gib m für die Funktion mx+b ein: ");
    scanf("%lf", &m);
    printf("Gib b für die Funktion mx+b ein: ");
    scanf("%lf", &b);
    printf("Wie viele Punkte sollen generiert werden? ");
    scanf("%d", &anzahl_punkte);
    erstelle_lineare_funktionstabelle(m, b, anzahl_punkte);
}

int main() {
    int wahl;

    while(1) {
        zeige_menue();
        printf("Deine Wahl: ");
        scanf("%d", &wahl);

        switch(wahl) {
            case 1:
            case 2:
            case 3:
            case 4:
                bearbeite_grundoperation(wahl);
                break;
            case 5:
                bearbeite_flaechenberechnungen();
                break;
            case 6:
                bearbeite_volumenberechnungen();
                break;
            case 7:
                bearbeite_ausdrucksauswertung();
                break;
            case 8:
                bearbeite_lineare_funktionstabelle();
                break;
            case 9:
                printf("Auf Wiedersehen!\n");
                return 0;
            default:
                printf("Ungültige Auswahl. Bitte versuche es erneut.\n");
        }
    }

    return 0;
}