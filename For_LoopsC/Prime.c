#include<stdio.h>
int main(){
    int n;
    int a=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        a=a+1;
    }
    if(a==2 )
    printf("Prime");
    if (a==1)
    printf("Neither Prime nor composite");
    else
    printf("Composite");
    return 0;
}