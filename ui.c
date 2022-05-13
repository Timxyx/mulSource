#include <stdio.h>
#include "circuit.h"
#include <stdbool.h>

Circuit read_circuit()
{
    int temp;
    Circuit c;
    printf("enter the first resistor:\n");
    scanf("%lf", &c.r1);

    printf("enter the second resistor:\n");
    scanf("%lf", &c.r2);

    printf("enter the third resistor:\n");
    scanf("%lf", &c.r3);

    printf("Is it a serial? (yes: 1/ no: 0)\n");
    scanf("%d", &temp);

    c.isSerial = temp == 1 ? true : false;

    return c;
}

void print_circuit(Circuit c)
{
    printf("the first Resistor has a Resistance of %lf Ohm\n", c.r1);
    printf("the second Resistor has a Resistance of %lf Ohm\n", c.r2);
    printf("the third Resistor has a Resistance of %lf Ohm\n", c.r3);
    if (c.isSerial)
    {
        printf("It is a serial circuit\n");
    }
    else
    {
        printf("It is a paralell circuit\n");
    }
}

void draw_circuit(Circuit c)
{
    if (!c.isSerial)
    {
        printf(" ┌[%.0lfΩ]┐ \n", c.r1);
        printf("─┼[%.0lfΩ]┼─\n", c.r2);
        printf(" └[%.0lfΩ]┘ \n", c.r3);
    }
    else
    {
        printf("─[%.0lfΩ]──[%.0lfΩ]──[%.0lfΩ]─", c.r1, c.r2, c.r3);
    }
}