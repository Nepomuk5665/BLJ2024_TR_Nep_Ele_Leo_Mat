#include <stdio.h>

// Funktion zur Berechnung der Fakultät
unsigned long long int berechne_fakultaet(int n) {
    unsigned long long int fakultaet = 1;

    // Schleife zur Berechnung der Fakultät
    for(int i = 1; i <= n; i++) {
        fakultaet *= i;
    }

    return fakultaet;
}

int main() {
    int zahl;

    // Nutzereingabe
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &zahl);

    // Überprüfen, ob die eingegebene Zahl negativ ist
    if(zahl < 0) {
        printf("Fakultät ist für negative Zahlen nicht gedacht.\n");
    } else if(zahl == 0) {
        // Fakultät berechnen und ausgeben
        printf("Die Fakultaet von %d ist %llu.\n", zahl, berechne_fakultaet(zahl));
    }

    return 0;
}
