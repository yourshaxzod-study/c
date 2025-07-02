#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
#define PI 3.14159

int main()
{
    int a = 10, b = 20;

    printf("Max of %d and %d: %d\n", a, b, MAX(a, b));
    printf("Square of %d: %d\n", a, SQUARE(a));
    printf("PI: %.5f\n", PI);

    return 0;
}