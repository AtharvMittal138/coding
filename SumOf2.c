#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b,sum;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum=add(a,b);
    printf("The sum is: %d",sum);
    return 0;
}