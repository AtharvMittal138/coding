#include<stdio.h>
#include<math.h>
int main()
{
    int n,sign=1, n2;
    double num,power,sum=0.0;
    printf("Enter the values of x in radians: ");
    scanf("%lf",&num);
    printf("Enter the number of terms to be printed: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        n2= 2*i-1;
        power= pow(num, n2);
        sum = sum + sign*power;
        sign= -1*sign;
    }
    printf("The sum of the %d terms of the sin(%lf) is: %lf",n,num,sum);
    return 0;
}