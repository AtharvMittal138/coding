#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        b=1;
        for(int j=n;j>=i;j--)
        {
            printf("%d",b);
            b++;
        }
        for(int k=1;k<=2*(i-1)-1;k++)
        {
            printf(" ");
        }
        if(i==1)
            a=n+1;
            else
            a=i+n-1;
        for(int l=n;l>=i;l--)
        {
            
            if(i==1 && l==1)
            break;
            else
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}