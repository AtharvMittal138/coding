#include<stdio.h>
void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The 1st number is: %d",a);
    printf("\nThe 2nd number is: %d",b);
    return 0;
}