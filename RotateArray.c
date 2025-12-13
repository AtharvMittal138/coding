#include<stdio.h>
int main(){
    int n,temp,r;
    printf("Enter The size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the elements to rotate: ");
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        temp=arr[n-1];
        for(int j=0;j<n;j++)
        {
        if(j<n-1)
        arr[n-j-1]=arr[n-j-2];
        else
        arr[0]=temp;
        }
    }
    printf("The new array after rotating is: \n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}