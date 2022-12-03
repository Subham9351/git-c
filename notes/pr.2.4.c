#include <stdio.h>

int main()
{
    int income;
    printf("The income is \n");
    scanf("%d", &income);


    int tax;
    printf("The tax is \n");
    scanf("%d", &tax);

    int incomeAmt;
    incomeAmt = income*tax;
    printf("%d",incomeAmt);
    return 0;
}