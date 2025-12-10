#include<stdio.h>
int fact(int n);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factorial of the number is: %d",fact(num));
}
int fact(int n){
    if (n==1)
    return 1;
    return n*fact(n-1);
}