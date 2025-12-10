#include<stdio.h>
#include<math.h>
int main()
{
    double a,n,sum=1, p;
    printf("Enter the value of a to find the sum of the series S=1+a^2+a^3.... : ");
    scanf("%lf",&a);
    printf("Enter the number of terms: ");
    scanf("%lf",&n);
    for(int i=2;i<=n;i++)
    {
        p=pow(a , i);
        sum= sum + p ;
    } 
    printf("The sum of the series is: %lf", sum);
    return 0;
}