#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"
size_t add_item(Item items[], size_t count)
{
    Item it;
    char input[100];
    printf("What type is the new Item?\n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", it.type);

    printf("In what quantity do you have the item?\n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%u", &it.quantity);

    printf("What is the Value of the item?\n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%lf", &it.value);

    printf("What is the unit of the ?\n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", it.unit);

    items[count] = it;

    return count + 1;
}
void print_item(Item i)
{
    printf("Type: %s, Quantity: %u, Value: %lf, Unit: %s\n\n", i.type, i.quantity, i.value, i.unit);
}
void print_items(Item items[], size_t count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Type: %s, Quantity: %u, Value: %lf, Unit: %s\n\n", items[i].type, items[i].quantity, items[i].value, items[i].unit);
    }
}

void print_help()
{
    printf("// `a` -> create a new item and add it to the inventory array\n");
    printf("// `c` -> show the number of capacitors\n");
    printf("// `e` -> exit the program\n");
    printf("// `i n` -> show the n-th item (0-indexed) of the inventory array\n");
    printf("// `h` -> show this help text\n");
    printf("// `l` -> show the list of items\n");
    printf("// `r` -> show the number of resistors\n");
}
void cli()
{
    Item items[1000];
    size_t count = 0;
    char input[10];
    int nth = 0;
    char c = ' ';
    printf("// `a` -> create a new item and add it to the inventory array\n");
    printf("// `c` -> show the number of capacitors\n");
    printf("// `e` -> exit the program\n");
    printf("// `i n` -> show the n-th item (0-indexed) of the inventory array\n");
    printf("// `h` -> show this help text\n");
    printf("// `l` -> show the list of items\n");
    printf("// `r` -> show the number of resistors\n");
    while (c != 'e')
    {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%c %d", &c, &nth);

        switch (c)
        {
        case 'a':
            count = add_item(items, count);
            break;

        case 'l':
            print_items(items, count);
            break;

        case 'i':
            print_item(items[nth - 1]);
            break;

        case 'h':
            print_help();
            break;

        case 'c':
            count_capacitors(items, count);
            break;

        case 'r':
            count_resistors(items, count);
            break;

        case 'e':
            exit(EXIT_SUCCESS);
            break;

        default:
            break;
        }

        printf("Menu: \n");
    }
}