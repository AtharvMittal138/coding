#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows to be printed: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)//rows
    {
        for(int j=1;j<=m;j++)//what to write in that row
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}