#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows to be printed: ");
    scanf("%d",&n);
    if(n%2 == 1)
 {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1 || j==n/2+1)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
 }
    else
    printf("Enter an odd number");
    return 0;
}