#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("First number: %d\n",x);
    printf("second number: %d\n",y);
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}