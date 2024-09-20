#include "calc.h"

// Funktion zur Berechnung der Potenz (Basis hoch Exponent)
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
