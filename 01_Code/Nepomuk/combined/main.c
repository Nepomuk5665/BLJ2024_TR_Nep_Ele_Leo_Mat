#include <stdio.h>
#include <string.h>
#include "calc.h"

void zeige_hauptmenue() {
    printf("\nWillkommen zum besten Taschenrechner und Wissenschaft des Lebens!\n");
    printf("Wähle mit der Zahl, was du machen willst:\n");
    printf("1. Taschenrechner\n");
    printf("2. Life Science\n");
    printf("3. Beenden\n");
}

void zeige_taschenrechner_menue() {
    printf("\nTaschenrechner-Menü:\n");
    printf("1. Addieren\n");
    printf("2. Subtrahieren\n");
    printf("3. Multiplizieren\n");
    printf("4. Dividieren\n");
    printf("5. Flächenberechnungen\n");
    printf("6. Volumenberechnungen\n");
    printf("7. Zurück zum Hauptmenü\n");
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

void wissenschaft_des_lebens() {
    int wahl;
    int Alkohol;
    int Gewicht;
    float Geschlecht;
    int Grösse;
    float resultat;
    int Aufstehzeit;
    int Schlafzeit;
    int Alter;

    printf("Wilkommen im Sience of Life Rechner\n");
    printf("1. Body-Mass-Index Rechner\n2. Alkoholpromillerechner\n3. Schlafrechner\n4. Kalorienrechner\n");
    scanf("%d", &wahl);

    switch (wahl) {
        case 1:
            printf("Gewicht:");
            scanf("%d", &Gewicht);
            printf("Grösse:");
            scanf("%d", &Grösse);
            resultat = bmi(Gewicht, Grösse);
            break;
        case 2:
            printf("Alcohol:");
            scanf("%d", &Alkohol);
            printf("Gewicht:");
            scanf("%d", &Gewicht);
            printf("Geschlecht: 1=Mann 2=Frau");
            int genderInput;
            scanf("%d", &genderInput);
            if (genderInput == 1) {
                Geschlecht = 0.7f;
            } else if (genderInput == 2) {
                Geschlecht = 0.6f;
            }
            resultat = wid1(Alkohol, Gewicht, Geschlecht);
            break;
        case 3:
            printf("Aufstehzeit:");
            scanf("%d", &Aufstehzeit);
            printf("Schlafzeit:");
            scanf("%d", &Schlafzeit);
            resultat = schlaf(Aufstehzeit, Schlafzeit);
            break;
        case 4:
            printf("Gewicht:");
            scanf("%d", &Gewicht);
            printf("Grösse:");
            scanf("%d", &Grösse);
            printf("Alter: ");
            scanf("%d", &Alter);
            printf("Geschlecht: 1=Mann 2=Frau");
            scanf("%d", &genderInput);
            if (genderInput == 1) {
                Geschlecht = 88.36;
                resultat = BMR1(Geschlecht, Gewicht, Grösse, Alter);
            } else if (genderInput == 2) {
                Geschlecht = 447.6;
                resultat = BMR2(Geschlecht, Gewicht, Grösse, Alter);
            }
            break;
        default:
            printf("Ungültige Auswahl\n");
            return;
    }
    printf("Resultat: %.2f\n", resultat);
}

int main() {
    int hauptwahl, taschenrechnerwahl;

    while(1) {
        zeige_hauptmenue();
        printf("Deine Wahl: ");
        scanf("%d", &hauptwahl);

        switch(hauptwahl) {
            case 1:
                do {
                    zeige_taschenrechner_menue();
                    printf("Deine Wahl: ");
                    scanf("%d", &taschenrechnerwahl);

                    switch(taschenrechnerwahl) {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                            bearbeite_grundoperation(taschenrechnerwahl);
                            break;
                        case 5:
                            bearbeite_flaechenberechnungen();
                            break;
                        case 6:
                            bearbeite_volumenberechnungen();
                            break;
                        case 7:
                            break;
                        default:
                            printf("Ungültige Auswahl. Bitte versuche es erneut.\n");
                    }
                } while(taschenrechnerwahl != 7);
                break;
            case 2:
                wissenschaft_des_lebens();
                break;
            case 3:
                printf("Auf Wiedersehen!\n");
                return 0;
            default:
                printf("Ungültige Auswahl. Bitte versuche es erneut.\n");
        }
    }

    return 0;
}