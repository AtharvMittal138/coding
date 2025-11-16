#include<stdio.h>
int main(){
    int a[1000],n,pos;
    printf("Enter the number of elements you want to print\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the position of number you want to delete\n");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++)
    a[i]=a[i+1];
    printf("The new array is\n");
    for(int i=0;i<n-1;i++)
    printf("%d\t",a[i]);
    return 0;
}