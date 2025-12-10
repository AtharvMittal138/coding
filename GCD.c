#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int gcd(int a,int b)
{
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        return i;
    }
}
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("The GCD of the two number is: %d",gcd(n1,n2));
    return 0;
}