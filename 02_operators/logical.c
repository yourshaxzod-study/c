#include <stdio.h>

int main()
{
    int a = 1, b = 0;

    printf("a = %d, b = %d\n", a, b);
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);
    printf("!b: %d\n", !b);

    return 0;
}