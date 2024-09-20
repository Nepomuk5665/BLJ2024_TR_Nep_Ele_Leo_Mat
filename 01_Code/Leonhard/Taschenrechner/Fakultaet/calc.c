//
// Created by leonhard.voelcker on 20.09.2024.
//

#include "calc.h"
unsigned long long int berechne_fakultaet(int n) {
    unsigned long long int fakultaet = 1;

    for(int i = 1; i <= n; i++) {
        fakultaet *= i;
    }

    return fakultaet;
}