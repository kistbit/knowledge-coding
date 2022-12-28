#include<stdio.h>
int main ()
{
    int marks=0;
    printf("enter the marks\n");
    scanf("%d",&marks);
    if (marks>=0&&marks<=39)
    {
        printf("the student has failed");

    }
    else if( marks>=4&&marks<=49)
    {
        printf("the student got third division");
    }
    else if (marks>=50&& marks<=59)
    {
        printf(" the student got second division ");
    }
    else if (marks>=60&&marks<=74)
    {
        printf("the student got first divison");
    }
    else
    {
        printf("the student got division");
    }
    return 0;

}