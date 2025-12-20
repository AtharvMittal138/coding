#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements to be sorted\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int j=0,i=0,temp;
    while(i<n)
    {   if(arr[i]!=0)
        { 
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j++;
        }
        else
        i++;
    }
    printf("Element after sorting is: \n");
    for(int k=0;k<n;k++)
    printf("%d ",arr[k]);
    return 0;
}