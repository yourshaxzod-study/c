#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[] = "World";
    char str3[20];

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);

    printf("str3: %s\n", str3);
    printf("Length: %d\n", strlen(str3));

    return 0;
}