#include<stdio.h>
int main(){
 int l,b,a,p;
 printf("Enter the length of rectangle : ");
 scanf("%d",&l);
 printf("Enter the breadth of rectangle : ");
 scanf("%d",&b);
 p=2*(l+b);
 a=l*b;
 if(p>a){
    printf("Perimeter is greater than area");
 }
 if(p<a){
    printf("Perimeter is smaller than area");
 }
if(p==a){
    printf("Perimeter is equal to area");
 }
    return 0;
}