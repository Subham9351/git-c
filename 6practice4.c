#include <stdio.h>

int main()
{
    int principal, time, rateofinterest;

    printf("the principal is \n");
    scanf("%d", &principal);

    printf("the time is \n");
    scanf("%d", &time);

    printf("the rate of intereset is\n");
    scanf("%d", &rateofinterest);

    printf("The Simple Interset is %d", principal * rateofinterest * time / 100);
    return 0;
}