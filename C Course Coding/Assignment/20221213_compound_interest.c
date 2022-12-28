#include <stdio.h>
#include <math.h>
int main()
{
    float p = 0, r = 0, t = 0, z = 0, ci = 0;
    printf("enter principle,rate and time");
    scanf("%f %f %f", &p, &r, &t);
    z = 1 + (r / 100);
    ci = p * (pow(z, t) - 1);
    printf("the compound interest is %f", ci);
    return 0;
}