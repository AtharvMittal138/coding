#include <stdio.h>
int main ()
{
    int n,a=0,b=1,new=0;
    printf("Enter the number of terms to be printed of a fibonacci series: ");
    scanf("%d",&n);
    printf("The series up to %d terms is\n",n);
    for(int i=1;i<=n;i++)
    {
        new=a+b;
        printf("%d ",a);
        a=b;
        b=new;
        
    }
    return 0;
}