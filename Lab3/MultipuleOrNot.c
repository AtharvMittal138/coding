#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a%b==0)
    printf("%d is the multiple of %d",a,b);
    else if(b%a==0)
    printf("%d is the multiple of %d",b,a);
    else
    printf("Neither of the one is the multiple of the other one");
    return 0;
}