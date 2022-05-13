#ifndef UI_H
#define UI_H
#include <stdio.h>
#include "circuit.h"

Circuit read_circuit();
void draw_circuit(Circuit c);
void print_circuit(Circuit c);

#endif