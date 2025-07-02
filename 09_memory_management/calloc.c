#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5;
    int i;

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Initial values: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}