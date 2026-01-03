#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all the terms\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            pos=i-1;
            break;
        }
        pos=i-2;
    }
    if(pos>=0)
    { 
       for(int i=n-1;i>0;i--)
        {
           int temp;
           if(arr[i]>arr[pos])
           {
              temp=arr[i];
              arr[i]=arr[pos];
              arr[pos]=temp;
              break;
           }
        }
    }
    for(int i=pos+1,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}