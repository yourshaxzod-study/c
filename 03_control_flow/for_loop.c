#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum += i;
        printf("%d ", i);
    }

    printf("\nSum: %d\n", sum);

    return 0;
}
