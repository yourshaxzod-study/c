#include <stdio.h>

int main()
{
    int num = 42;
    int *ptr = &num;

    printf("Value: %d\n", num);
    printf("Address: %p\n", &num);
    printf("Pointer: %p\n", ptr);
    printf("Value via pointer: %d\n", *ptr);

    *ptr = 100;
    printf("New value: %d\n", num);

    return 0;
}