#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            printf("  ");
            else
            printf("* ");
        }
        for(int k=1;k<n;k++)
        {
            if(i>k)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}