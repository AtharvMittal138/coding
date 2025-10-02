#include<stdio.h>
int main(){
   int a;
    printf("Enter the first number :");
    scanf("%d",&a);
    int b;
    printf("Enter the second number :");
    scanf("%d",&b);
    int c;
    printf("Enter the third number :");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("First number is the greatest");
        }
        else{
            printf("Third number is the greatest");
        }
    }
        else{
            if(b>c)
            printf("Second number is the greatest");
            else
            printf("Third number is the greatest");
        }
    


    return 0;
}