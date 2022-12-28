#include<stdio.h>
int main()
{
    float l=0,b=0,area=0,perimeter=0;
    printf("Enter length and breadth of rectangle");
    scanf("%f %f",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area of rectangle is %f",area );
    printf("Perimeter of rectangle is %f",perimeter);
    return 0;
}