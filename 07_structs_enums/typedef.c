#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    Point p1 = {10, 20};
    Point p2;

    p2.x = 30;
    p2.y = 40;

    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}