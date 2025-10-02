#include<stdio.h>
int main()
{
    int rows,half;
    printf("Enter the number of rows to be printed: ");
    scanf("%d",&rows);
    if(rows%2 == 0)
    half=rows/2;
    else
    half=(rows/2)+1;
    for(int i=1; i<=half; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
    for(int i=(rows/2); i>=1; i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
    return 0;
}