#include <stdio.h>
#include "calc.h"

int main() {
    int zahl;
    
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &zahl);


    if(zahl < 0) {
        printf("Fakultät ist für negative Zahlen nicht gedacht.\n");
    } else if(zahl > 0) {
        printf("Die Fakultaet von %d ist %llu.\n", zahl, berechne_fakultaet(zahl));
    }
    else if(zahl == 0) {
        printf("Die Fakultaet von 0 ist 1");
    }

    return 0;
}
