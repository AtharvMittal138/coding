#include<stdio.h>
int main()
{
    int sales;
    printf("Enter the sales made by the salesman: ");
    scanf("%d",&sales);
    switch(sales)
    {
        case 0 ... 5000:
        {
            printf("You get a commission of rupees 0");
        }
        break;
        case 5001 ... 12000:
        {
            printf("You get a commission of rupees %lf",(0.03*sales));
        }
        break;
        case 12001 ... 22000:
        {
            printf("You get a commission of rupees %lf",(0.07*sales));
        }
        break;
        case 22001 ... 30000:
        {
            printf("You get a commission of rupees %lf",(0.1*sales));
        }
        break;
        default:
        {
            printf("You get a commission of rupees %lf",(0.15*sales));
        }
    }
    return 0;
}