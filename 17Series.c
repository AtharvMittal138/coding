#include<stdio.h>
int main()
{
    int n,sign=1,sum=0,a=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+a*sign;
        a=a+2;
        sign=-1*sign;
    }
    printf("Sum of the series is: %d",sum);
    return 0;
}