#include<stdio.h>
int main(){
    int n,sum,count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n); 
    int arr[n];
    printf("Enter the values of the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the sum of the pair: ");
    scanf("%d",&sum);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==sum)
            count++;
        }
    }
    printf("The number of pairs with the sum %d is %d",sum,count);
    return 0;
}