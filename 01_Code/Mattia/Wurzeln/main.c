#include <stdio.h>
#include "calc.h"

int main() {
    double number;

    printf("Gib eine Zahl ein: ");
    scanf("%lf", &number);

    double result = sqrt_custom(number);

    if (result == -1) {
        printf("Fehler: Die Zahl ist negativ.\n");
    } else {
        printf("Die Quadratwurzel von %.5f ist %.5f\n", number, result);
    }

    return 0;
}
