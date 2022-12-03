#include <stdio.h>

int main()
{
    int radius, height;

    printf("the radius is \n");
    scanf("%d", &radius);

    printf("the area of the circle is %d \n", 2 * 22 / 7 * radius);

    printf("the breadth is\n");
    scanf("%d", &height);

    printf("the volume of a cylinder is %d", 22 / 7 * radius * radius * height);

    return 0;
}