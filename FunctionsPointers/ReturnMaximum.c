#include<stdio.h>
int max(int m,int a);
int main()
{
    int n,maxi;
    printf("Enter the number of values that you will input: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d values\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    printf("The maximum of all the numbers= %d",maxi);
    return 0;
}
int max(int m,int a){
    if(m>a)
    return m;
    else
    return a;
}