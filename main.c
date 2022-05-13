#include "circuit.h"
#include "ui.h"
#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include "inventory.h"
void main()
{
    printf("first exercise\n");
    Circuit c1 = read_circuit();
    print_circuit(c1);
    printf("The total Resistance of c1 = %lf\n", calc_circuit_resistance(c1));
    printf("\nsecond exercise\n");
    draw_circuit(c1);
    cli();
}