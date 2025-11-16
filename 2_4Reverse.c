#include<stdio.h>
int main(){
    int a[1000],n;
    printf("Enter the number of elements you want to print\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n/2;i++)
    {
        a[i]=a[i]+a[n-(i+1)];
        a[n-(i+1)]=a[i]-a[n-(i+1)];
        a[i]=a[i]-a[n-(i+1)];
    }
    printf("The reversed array is\n");
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}