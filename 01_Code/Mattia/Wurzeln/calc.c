#include "calc.h"

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

