#include<stdio.h>
int fibonacci(int num)
{
if ( num==0)
return 0;
if (num==1)
return 1;
else
return fibonacci(num-1)+fibonacci(num-2);
}
int main()
{
int n;
printf("ENter terms");
scanf("%d", &n);
printf("fibonacci series upto %d\n",n);
for(int i=0;i<n;i++)
{
    printf("%d ",fibonacci(i));
}
}