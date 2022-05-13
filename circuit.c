#include <stdio.h>
#include <stdlib.h>
#include "circuit.h"

double calc_circuit_resistance(Circuit c)
{
    double out = 0;
    if (c.isSerial)
    {
        out = c.r1 + c.r2 + c.r3;
    }
    else
    {
        out = 1 / (1 / c.r1 + 1 / c.r2 + 1 / c.r3);
    }

    return out;
}
