#include<stdio.h> 
#include<string.h>
int main(){
    int a[1000],b[1000],n1,n2;
    printf("Enter n1\n");
    scanf("%d",&n1);
    printf("Enter the elements\n");
    for(int i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter n2\n");
    scanf("%d",&n2);
    printf("Enter the elements");
    for(int i=0;i<n2;i++)
    scanf("%d",&b[i]);
    strcat(a,b);
    for(int i=0;i=n1+n2;i++)
    printf("%d\t",a[i]);
    return 0;
}