//
// Created by Eleonora on 20.09.2024.
//

#include "calc.h"
float bmi(int a, int b) {
    return (float)a / (b * b);
}

float wid1(int a, int b, float r) {

    return (float)a / (b * r);
}

float BMR1(float a, int e, int f, int g) {
     float b=13.4; float c=4.8; float d=5.7;
    return a + (b * e ) + (c * f ) - (d * g );
}
float BMR2(float a, int e, int f, int g) {
    float b=9.2; float c=3.1; float d=4.3;
    return a + (b * e ) + (c * f ) - (d * g );
}
int schlaf(int a, int b) {
    int c=12;
    return (a + c) - b;
}


