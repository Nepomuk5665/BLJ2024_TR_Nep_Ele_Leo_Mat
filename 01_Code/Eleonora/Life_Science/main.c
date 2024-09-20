#include <stdio.h>
#include "calc.h"

int main(void) {
    int wahl;
    int Alkohol;
    int Gewicht;
    float Geschlecht;
    int Grösse;
float resultat;
    int Aufstehzeit;
    int Schlafzeit;
    int Alter;

printf("Welcome to the Science of Life\n");
    printf("1. Body-Mass-Index Rechner\n 2. Alkoholpromillerechner\n 3. Schlafrechner\n 4. Kalorienrechner ");
scanf("%d",&wahl);

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
        }else if (genderInput == 2) {
            Geschlecht = 0.6f;
        }

                resultat = wid1(Alkohol, Gewicht, Geschlecht);
          break;
case 3:

    printf("Aufstehzeit:");
        scanf("%d", &Aufstehzeit);
        printf("Schlafzeit:");
        scanf("%d", &Schlafzeit);

        resultat = schlaf(Aufstehzeit, Schlafzeit );
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
        }else if (genderInput == 2) {
            Geschlecht = 447.6;
            resultat = BMR2(Geschlecht, Gewicht, Grösse, Alter);
        }



    }
    printf("Resultat: %0.f", resultat);
    return 0;
}
