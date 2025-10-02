#include<stdio.h>
int main(){
    int n;
    int new=0;
    int rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
         rem = n%10;
         new=new*10 + rem;
         n=n/10;
    }
    printf("The reverse number is : %d",new);
    return 0;
}