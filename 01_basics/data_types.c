#include <stdio.h>

int main()
{
    int items = 5;
    float const_per_item = 12.99;
    float total_cost = items * const_per_item;
    char currency = '$';

    printf("Total cost: %c%.2f\n", currency, total_cost);
    printf("Items: %d\n", items);
    printf("Cost per item: %.2f\n", const_per_item);
    printf("Currency: %c\n", currency);

    return 0;
}