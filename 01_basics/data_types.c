#include <stdio.h>

int main()
{
    char c = 'X';
    short s = 32000;
    int i = 123456;
    long l = 9876543210L;
    float f = 3.14f;
    double d = 2.71828;

    printf("char: %c\n", c);
    printf("short: %hd\n", s);
    printf("int: %d\n", i);
    printf("long: %ld\n", l);
    printf("float: %.2f\n", f);
    printf("double: %.5f\n", d);

    return 0;
}