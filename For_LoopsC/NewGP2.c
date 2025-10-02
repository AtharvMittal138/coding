#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    double a=100;
    for(int i=1;i<=n;i++)
    {
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}