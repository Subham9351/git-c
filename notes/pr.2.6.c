#include <stdio.h>

int main()
{
    int year;
    printf("the year is ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
            
        {
            if (year % 400 == 0)
            {
                printf("it is a leap year it has 366 days.");
            }
        }
    }
    else
    {
         printf("it has 365 days");
    }
    return 0;
}