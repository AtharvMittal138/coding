#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the number of rows to be printed: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}