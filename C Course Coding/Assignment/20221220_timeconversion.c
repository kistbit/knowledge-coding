#include<stdio.h>
int main()
{
    int sec=0,min=0,hr=0,x=0;
    printf("enter seconds");
    scanf("%d",&sec);
    x=sec;
    hr=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    printf("the conversion of %d seconds is %d hr %d min %d seconds",x,hr,min,sec);
    return 0;
}