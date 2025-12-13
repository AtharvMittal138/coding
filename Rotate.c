#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row and coloumn of the matrix: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the elements of the array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }
    int trans[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        trans[j][i]=arr[i][j];
    }
    int temp;
    for(int i=0;i<c/2;i++)
    {
        for(int j=0;j<r;j++)
        { 
        temp=trans[i][j];
        trans[i][j]=trans[c-i-1][j];
        trans[c-i-1][j]=temp;
        }
    }
    printf("The matrix after rotating 90 degree is\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        printf("%d ",trans[i][j]);
        printf("\n");
    }
    return 0;
}