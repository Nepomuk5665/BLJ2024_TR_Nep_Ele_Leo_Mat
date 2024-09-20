#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    // Initialisiere den Zufallsgenerator
    srand(time(NULL));

    printf("Willkommen zu Schere, Stein, Papier!\n");
    printf("Wähle eine Option:\n");
    printf("1. Schere\n");
    printf("2. Stein\n");
    printf("3. Papier\n");
    printf("Deine Wahl: ");

    // Benutzereingabe
    scanf("%d", &userChoice);

    // Zufällige Wahl des Computers (1 = Schere, 2 = Stein, 3 = Papier)
    computerChoice = rand() % 3 + 1;

    // Anzeigen der Auswahl
    printf("Du hast gewählt: ");
    switch (userChoice) {
        case 1: printf("Schere\n"); break;
        case 2: printf("Stein\n"); break;
        case 3: printf("Papier\n"); break;
        default: printf("Ungültige Wahl\n"); return 1;
    }

    printf("Der Computer hat gewählt: ");
    switch (computerChoice) {
        case 1: printf("Schere\n"); break;
        case 2: printf("Stein\n"); break;
        case 3: printf("Papier\n"); break;
    }

    // Spielregeln und Ergebnis
    if (userChoice == computerChoice) {
        printf("Unentschieden!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("Du gewinnst!\n");
               } else {
                   printf("Der Computer gewinnt!\n");
               }

    return 0;
}


