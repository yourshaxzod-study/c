#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    struct Student s1;

    strcpy(s1.name, "Alice");
    s1.age = 20;
    s1.grade = 85.5;

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Grade: %.1f\n", s1.grade);

    return 0;
}