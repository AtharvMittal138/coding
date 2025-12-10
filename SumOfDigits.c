#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int rem;
    int sum=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("The Sum of the digits : %d",sum);
    return 0;

}