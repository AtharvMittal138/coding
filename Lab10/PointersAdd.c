#include<stdio.h>
int sum(int *a,int *b ){
    int s=*a+*b;
    return s;
}
int main()
{
    int x,y;
    
    printf("Enter the value of 1st number: ");
    scanf("%d",&x);
    printf("Enter the value of 2nd number: ");
    scanf("%d",&y);
    printf("The sum of the two numbers = %d",sum(&x, &y));
    return 0;
}