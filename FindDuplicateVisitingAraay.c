#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int arr[n];
    int visit[n];
    printf("Enter all the elements from 1 to %d",n-1);
    for(int i=0;i<n;i++)
    { 
    scanf("%d",&arr[i]);
    visit[i]=0;
    }
    for(int i=0;i<n;i++)
    {
    if(visit[arr[i]]==0)
    visit[arr[i]]=arr[i];
    else
    { 
    printf("The duplicate number is: %d",arr[i]);
    return 0;
    } 
    }
    return 0;
}