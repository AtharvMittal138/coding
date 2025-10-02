#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int rem;
    int a;
    int sum=0;
    while(n>0)
    {

        rem= n%10;
        a= rem % 2;
        if(a == 0)
        {
            sum=sum+rem;
        }
        n=n/10;
    }
    printf("The sum of all even number is : %d",sum);
    return 0;
}