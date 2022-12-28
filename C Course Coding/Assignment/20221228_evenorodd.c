#include<stdio.h>
int main()
{
    int rem=0,num=0,i=1;
    printf("to check even or odd \n");
    printf("enter a number");
    scanf("%d",&num);
    rem=num%2;
    while (i<=50)
    {
        if(rem==0)
        {
            printf("\n  %d is even number",num);
        }
        else
        {
            printf("\n  %d is odd number",num);
        }
        i=i+1;
    }
    return 0;
}