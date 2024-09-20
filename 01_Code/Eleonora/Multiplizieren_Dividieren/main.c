#include <stdio.h>
#include "calc.h"


int main(void) {
    int wahl;
    int resultat;

    printf("3. Multiplizieren\n 4. Dividieren\n");
    scanf("%d", &wahl);

    switch(wahl) {
        case 3:
            int Multiplikator;
            printf("Multiplikator: ");
            scanf("%d", &Multiplikator);
            int Multiplikand;
            printf("Multiplikand: ");
            scanf("%d", &Multiplikand);
            resultat = mult(Multiplikator, Multiplikand);
        break;
        case 4:
            int Dividend;
            printf("Dividend: ");
            scanf("%d", &Dividend);
            int Divisor;
            printf("Divisor: ");
            scanf("%d", &Divisor);
            resultat = divide(Dividend, Divisor);
        break;
    }
    printf("Resultat: %d\n", resultat);


}
