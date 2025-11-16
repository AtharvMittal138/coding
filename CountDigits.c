#include<stdio.h>
int main()
{
   long long n;
   int a=0;
   printf("Enter a number : ");
   scanf("%lld", &n);
   for (long long i=n;i>=1;i=i/10)
   {
     a++;
   }
   printf("The number of digits in the number is : %d",a);
} 