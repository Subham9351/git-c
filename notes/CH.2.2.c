#include<stdio.h>

int main()
{

    int age;
    printf("enter your age: \n");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("you cannot drive because your age is above 90");
    }
    else
    {
        printf("you cannot drive");
    }

    return 0;
}