#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows to be printed: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=65;j<65+n;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}