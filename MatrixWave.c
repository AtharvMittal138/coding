#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the dimensions of matrix: ");
    scanf("%d %d",&m,&n);
    int arr1[m][n];
    printf("Enter the elements of matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("The matrix in wave patternis\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            printf("%d ",arr1[i][j]);
            else
            printf("%d ",arr1[i][n-j-1]);
        }
    }
    return 0;
}