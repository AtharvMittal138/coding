#include<stdio.h>
int main()
{
    int cost;
    printf("Enter the cost price of the product :\n");
    scanf("%d" ,&cost);
    switch(cost)
    {
        case 0 ... 499:
        printf("No discount available at this price");
        break;
        case 500 ... 799:
        printf("You get a discount of Rs %lf",0.2*cost);
        break;
        default :
        printf("You get a discount of Rs : %lf",0.25*cost);
    }
    return 0;
}