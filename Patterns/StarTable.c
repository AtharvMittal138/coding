#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("*");
        }
        for(int k=1;k<=2*(i-1)-1;k++)
        {
            printf(" ");
        }
        for(int l=n;l>=i;l--)
        {
            if(i==1 && l==1)
            break;
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}