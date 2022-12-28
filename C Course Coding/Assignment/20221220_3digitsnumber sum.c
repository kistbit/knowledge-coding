#include <stdio.h>
int main()
{
    int num = 0, r1 = 0, r2 = 0, q1 = 0, q2 = 0, sum = 0;
    printf("enter 3 digits number");
    scanf("%d", &num);
    q1 = num / 10;
    r1 = num % 10;
    q2 = q1 / 10;
    r2 = q1 % 10;
    sum = r1 + r2 + q2;
    printf("the sum of 3 digits number is %d ", sum);
    return 0;
}