#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

void greet(char name[])
{
    printf("Hello, %s!\n", name);
}

int main()
{
    int result = add(5, 3);
    printf("Result: %d\n", result);

    greet("John");

    return 0;
}
