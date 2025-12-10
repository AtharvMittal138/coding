#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,p;
    printf("Enter a number:\n");
    scanf("%lf",&a);
    printf("Enter the power to be raised on the above number:\n");
    scanf("%lf",&b);
    p= pow(a,b);
    printf("The power raised to %.2lf on the number %.2lf is %.2lf",b,a,p);
    return 0;
}