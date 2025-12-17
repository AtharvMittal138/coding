#include<stdio.h>
int main(){
    int target;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the sum which is to be found: ");
    scanf("%d",&target);
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]== target)
        { 
        printf("The two numbers are: %d, %d",arr[i],arr[j]);
        return 0;
        } 
        else if(arr[i]+arr[j]>target)
        j--;
        else if(arr[i]+arr[j]<target)
        i++;
    }
    printf("No such numbers found");
    return 0;
}