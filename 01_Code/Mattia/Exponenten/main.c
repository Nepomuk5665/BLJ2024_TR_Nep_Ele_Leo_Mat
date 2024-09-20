#include <stdio.h>
#include "calc.h"

int main() {
    int base, exponent;

    // Benutzereingabe
    printf("Gib die Basis ein: ");
    scanf("%d", &base);
    printf("Gib den Exponenten ein: ");
    scanf("%d", &exponent);

    // Berechnung der Potenz
    int result = power(base, exponent);

    // Ausgabe des Ergebnisses
    printf("%d hoch %d ist %d\n", base, exponent, result);

    return 0;
}
