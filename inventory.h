#ifndef INVENTORY_H
#define INVENTORY_H
#include <stdio.h>
#include <stdio.h>
typedef struct
{
    char type[80];
    unsigned int quantity;
    double value;
    char unit[20];
} Item;

size_t count_resistors(Item items[], size_t count);
size_t count_capacitors(Item items[], size_t count);

#endif