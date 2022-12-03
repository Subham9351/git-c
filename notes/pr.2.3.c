#include <stdio.h>

int main()
{
    int english;
    int hindi;
    int evs;
    int math;
    int totalmarks;
    totalmarks = english + hindi + evs + math;

    printf("write the marks of english: ");
    scanf("%d", &english);
    if (english > 33)
    {
        printf("you are pass\n");
    }
    else
    {
        printf("you are fail\n");
    }

    printf("write the marks of hindi: ");
    scanf("%d", &hindi);

    if (hindi > 33)
    {
        printf("you are pass\n");
    }
    else
    {
        printf("you are fail\n");
    }

    printf("write the marks of evs: ");
    scanf("%d", &evs);

    if (evs > 33)
    {
        printf("you are pass\n");
    }
    else
    {
        printf("you are fail\n");
    }

    printf("write the marks of math: ");
    scanf("%d", &math);

    if (math > 33)
    {
        printf("you are pass\n");
    }
    else
    {
        printf("you are fail\n");
    }

    if (totalmarks > 40)
    {
        printf("you are passed the exam\n");
    }
    else
    {
        printf("you are failed the exam\n");
    }
    return 0;
}