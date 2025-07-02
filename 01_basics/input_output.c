#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float height;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);

    return 0;
}