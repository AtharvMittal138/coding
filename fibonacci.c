#include<stdio.h>
int fibo(int a);
int main(){
    int n;
    printf("How many terms do you want to print: ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
int fibo(int a)
{
    static int first=0,second=1,next=0;
    next=first+second;
    printf("%d ",first);
    first=second;
    second=next;
    a--;
    if(a==0)
    return 0;
    else
    fibo(a);
}