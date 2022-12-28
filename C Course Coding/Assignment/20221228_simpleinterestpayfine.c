#include<stdio.h>
int main ()
{
    float p=0,t=0,r=0,si=0,amt=0;
    printf("to check if the customer has to pay a fine");
    printf("\n enter the valueof principal, time, and rate");
    scanf("%f %f %f",&p,&t,&r);
    si=(p*t*r)/100;
    if(si>=1500)
    {
        amt=si+p+1000;
    }
    else
    {
        amt=si+p;
    }
    printf("the customer has to pay %f",amt);
    
    return 0;
}
