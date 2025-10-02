#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c){
        printf("First number is the greatest");
    }
    if (b>a && b>c){
        printf("Second number is the greatest");
    }
    if (c>b && c>a){
        printf("third number is the greatest");
    }
   return 0; 
}