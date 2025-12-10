#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows to be printed: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=65;
        for(int j=n;j>=1;j--)
        {
            if(j>i)
            printf("  ");
            else
            {
            printf("%c ",a);
            a++;
            }
        }
        printf("\n");
    }
    return 0;
}