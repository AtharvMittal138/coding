#include<stdio.h>
int main(){
    int choice;
    double a,b;
    double add,sub,mul,div;
    printf("Enter the operation to be performed\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n"); 
    scanf("%d",&choice);
    printf("Enter two numbers :\n");
    scanf("%lf %lf", &a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    switch(choice)
    {
        case 1: printf("The addition of two numbers is :%lf",add);
        break;
        case 2: printf("The subtraction of two numbers is :%lf",sub);
        break;
        case 3: printf("The multiplication of two numbers is :%lf",mul);
        break;
        case 4: printf("The division of two numbers is :%lf",div);
        break;
        default: printf("Wrong Input");
    }

    return 0;
}