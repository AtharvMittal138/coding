#include<stdio.h>
int max(int *x,int*y)
{
    if(*x>*y)
    return *x;
    else
    return *y;
}
int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    printf("The Maximum of two number= %d",max(&a,&b));
    return 0;
}