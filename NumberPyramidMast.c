#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=1;
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            printf("  ");
            else
            {
            printf("%d ",a);
            a++;
            }
        }
        a--;
        for(int k=1;k<n;k++)
        {
            if(i>k)
            {
            printf("%d ",--a);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}