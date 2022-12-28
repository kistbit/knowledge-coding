#include<stdio.h>
int main ()
{
    float p=0, t=0, r=0,si=0;
    printf("enter principle rate and time");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("si is %f \n\n",si);
    return 0;
}
