#include<stdio.h>
int main ()
{
    int a=0,b=0,c=0;
    printf(" to check the greatest number");
    printf("\n enter the value of a ,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf(" a is the greatest");

        }
        else
        {
            printf("c is the greatest");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is the greatest");
        }
        else
        {
            printf(" c is the greatest");
        }
        
    }
    return 0;
}