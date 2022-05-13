#ifndef CIRCUIT_H
#define CIRCUIT_H
#include <stdio.h>
#include <stdbool.h>
typedef struct
{
    double r1;
    double r2;
    double r3;
    bool isSerial;
} Circuit;

double calc_circuit_resistance(Circuit c);

#endif