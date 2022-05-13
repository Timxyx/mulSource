#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include <string.h>

size_t count_resistors(Item items[], size_t count)
{
    printf("counting resistors\n");
    size_t cnt = 0;

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", items[i].type);
        if ((strcmp(items[i].type, "resistor") == 0))
        {
            printf("Hello\n");
            cnt += (size_t)items[i].quantity;
        }
    }
    printf("there are %lu resistors\n", cnt);
    return cnt;
}
size_t count_capacitors(Item items[], size_t count)
{
    printf("counting capacitor\n");
    size_t cnt = 0;

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", items[i].type);
        if ((strcmp(items[i].type, "capacitor") == 0))
        {
            printf("Hello\n");
            cnt += (size_t)items[i].quantity;
        }
    }
    printf("there are %lu capacitors\n", cnt);
    return cnt;
}
