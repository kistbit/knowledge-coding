#include<stdio.h>
int main ()
{
    int a=0,b=0,c=0,sum=0,rem=0;
    printf("to check even or odd");
    printf("\n enter the value of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    rem=sum%2;
    if(rem==0)
    {
            printf("\n  %d is even number",sum);
    }
    else
    {
            printf("\n  %d is odd number",sum);
    }
        return 0;
}
