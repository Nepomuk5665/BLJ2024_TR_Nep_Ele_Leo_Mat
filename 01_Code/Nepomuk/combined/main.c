#include <stdio.h>
#include "calc.h"

void print_menu() {
    printf("\nWillkommen beim besten Taschenrechner!\n");
    printf("Wähle mit der Zahl, was du machen willst:\n");
    printf("1. Summieren\n");
    printf("2. Subtrahieren\n");
    printf("3. Multiplizieren\n");
    printf("4. Dividieren\n");
    printf("5. Flächenberechnungen\n");
    printf("6. Volumenberechnungen\n");
    printf("7. Beenden\n");
}

void handle_basic_operation(int operation) {
    int a, b, result;
    printf("Erste Zahl: ");
    scanf("%d", &a);
    printf("Zweite Zahl: ");
    scanf("%d", &b);

    switch(operation) {
        case 1: result = calc_sum(a, b); break;
        case 2: result = calc_sub(a, b); break;
        case 3: result = mult(a, b); break;
        case 4:
            if (b != 0) {
                result = divide(a, b);
            } else {
                printf("Fehler: Division durch Null!\n");
                return;
            }
            break;
    }
    printf("Ergebnis: %d\n", result);
}

void handle_area_calculations() {
    int choice;
    double result, a, b, h;

    printf("\nFlächenberechnungen:\n");
    printf("1. Kreis\n2. Quadrat\n3. Rechteck\n4. Dreieck\n5. Trapez\n");
    printf("Wähle eine Form: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Radius: ");
            scanf("%lf", &a);
            result = flaeche_kreis(a);
            break;
        case 2:
            printf("Seitenlänge: ");
            scanf("%lf", &a);
            result = flaeche_quadrat(a);
            break;
        case 3:
            printf("Länge: ");
            scanf("%lf", &a);
            printf("Breite: ");
            scanf("%lf", &b);
            result = flaeche_rechteck(a, b);
            break;
        case 4:
            printf("Basis: ");
            scanf("%lf", &a);
            printf("Höhe: ");
            scanf("%lf", &h);
            result = flaeche_dreieck(a, h);
            break;
        case 5:
            printf("Seite a: ");
            scanf("%lf", &a);
            printf("Seite b: ");
            scanf("%lf", &b);
            printf("Höhe: ");
            scanf("%lf", &h);
            result = flaeche_trapez(a, b, h);
            break;
        default:
            printf("Ungültige Auswahl\n");
            return;
    }
    printf("Fläche: %.2f\n", result);
}

void handle_volume_calculations() {
    int choice;
    double result, a, b, h, r;

    printf("\nVolumenberechnungen:\n");
    printf("1. Kugel\n2. Würfel\n3. Quader\n4. Zylinder\n5. Kegel\n");
    printf("Wähle eine Form: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Radius: ");
            scanf("%lf", &r);
            result = volumen_kugel(r);
            break;
        case 2:
            printf("Seitenlänge: ");
            scanf("%lf", &a);
            result = volumen_wuerfel(a);
            break;
        case 3:
            printf("Länge: ");
            scanf("%lf", &a);
            printf("Breite: ");
            scanf("%lf", &b);
            printf("Höhe: ");
            scanf("%lf", &h);
            result = volumen_quader(a, b, h);
            break;
        case 4:
            printf("Radius: ");
            scanf("%lf", &r);
            printf("Höhe: ");
            scanf("%lf", &h);
            result = volumen_zylinder(r, h);
            break;
        case 5:
            printf("Radius: ");
            scanf("%lf", &r);
            printf("Höhe: ");
            scanf("%lf", &h);
            result = volumen_kegel(r, h);
            break;
        default:
            printf("Ungültige Auswahl\n");
            return;
    }
    printf("Volumen: %.2f\n", result);
}

int main() {
    int choice;

    while(1) {
        print_menu();
        printf("Deine Wahl: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
            case 2:
            case 3:
            case 4:
                handle_basic_operation(choice);
                break;
            case 5:
                handle_area_calculations();
                break;
            case 6:
                handle_volume_calculations();
                break;
            case 7:
                printf("Tschau bro\n");
                return 0;
            default:
                printf("Ungültige Auswahl. Bitte versuche es erneut.\n");
        }
    }

    return 0;
}