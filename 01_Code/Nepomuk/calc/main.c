#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "calc.h"

int main() {
    printf("Willkommen beim besten Taschenrechner!\n");
    while(1==1) {

        printf("Wähle mit der Zahl was du machen willst.\n");
        printf("1. Summieren\n2. Subtrahieren\n3. Exit\n");
        int wahl;
        printf("Zahl: ");
        scanf("%d", &wahl);
        int answer = 0;
        int zahl1;
        int zahl2;
        if (wahl != 3) {
            printf("Zahl1: ");
            scanf("%d", &zahl1);
            printf("Zahl2: ");
            scanf("%d", &zahl2);
        }
        int result = 0;

        switch (wahl) {
            case 1:
                result = calc_sum(zahl1, zahl2);
                break;
            case 2:
                result = calc_sub(zahl1, zahl2);
                break;
            case 3:
                return 0;
        }
        printf("Answer: %d\n", result);
        int sum = calc_sum(1,2);
    }
}
