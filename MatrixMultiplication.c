#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the dimensions of 1st matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the dimensions of 2nd matrix: ");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("The matrix cannot be multiplied");
        return 0;
    }
    int arr1[m][n],arr2[p][q];
    printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        scanf("%d",&arr2[i][j]);
    }
    int arr3[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            arr3[i][j]=0;
            for(int k=0;k<n;k++)
            {
                arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\nThe matrix after multiplication is\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}