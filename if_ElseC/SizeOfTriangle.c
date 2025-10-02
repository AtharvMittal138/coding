#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter the numbers \n");
    scanf("%d %d %d", &a, &b, &c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("The given numbers can form three sides of a triangle");
    }
    else{
        printf("The given numbers cannot form three sides of a triangle");
    }
    return 0;
}