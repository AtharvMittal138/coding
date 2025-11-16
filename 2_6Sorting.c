#include<stdio.h>
int main ()
{
    int a[1000],n;
    printf("Enter the number of elements to be inserted in an array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i])
            {
                a[i+1]=a[i]+a[i+1];
                a[i]=a[i+1]-a[i];
                a[i+1]=a[i+1]-a[i];
            }
        }
    }
    printf("The elements after sorting in decending order are:\n");
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
}