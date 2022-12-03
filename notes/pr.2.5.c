#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    int a, b;

    printf("the num1 is\n");
    scanf("%d", &num1);

    printf("the num2 is\n");
    scanf("%d", &num2);

    printf("the num3 is\n");
    scanf("%d", &num3);

    printf("the num4 is\n");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        a = num1;
    }
    else
    {
        a = num2;
    }

    if (num3 > num4)
    {
        b = num3;
    }
    else
    {
        b = num4;
    }

    if (a > b)
    {
        printf("the %d is greatest", a);
    }
    else
    {
        printf("the %d is greatest", b);
    }
    return 0;
}
