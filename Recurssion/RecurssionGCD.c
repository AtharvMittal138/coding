#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    if(n1<=0 || n2<=0)
    printf("Number must be greater than zero");
    else
    printf("Th GCD of the numbers are: %d",gcd(n1,n2));
    return 0;
}
int gcd(int a, int b)
{
        static int i=1;
        static int g=1; 
        if(i>a)
        return g;
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
        i++;
        gcd(a, b);
       
}
