#include <stdio.h>

enum Day
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    enum Day today = FRIDAY;

    printf("Today is day number: %d\n", today);

    if (today == FRIDAY)
    {
        printf("It's Friday!\n");
    }

    return 0;
}