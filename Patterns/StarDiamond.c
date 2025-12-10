#include<stdio.h>
#include<windows.h>
int main(){
    int n,a;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=(n+1)/2;i++)
    {
        for(int j=(n+1)/2;j>=1;j--)
        {
            if(j>i)
            printf(" ");
            else
            {
            printf("*");
            a++;
            }
        }
        for(int k=1;k<n;k++)
        {
            if(i>k)
            {
            printf("*");
            a++;
            }
            else
            printf(" ");
        }
        printf("\n");
        Sleep(100);
    }
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=i;j++)
        printf(" ");
        for(int k=n-2;k>=2*i-1;k--)
        printf("*");
        printf("\n");
        Sleep(100);         }
    return 0;  }