#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row and column of a matrix: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the elements of the array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
        scanf("%d",&arr[i][j]);
        }
    }
    int new[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
        new[j][i]=arr[i][j];
        }
    }
    printf("The transpose of the matrix is\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        { 
        printf("%d ",new[i][j]);
        }
        printf("\n");
    }
    return 0;
}