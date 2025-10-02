#include<stdio.h>
int main()
{
    int units ;
    printf("Enter your total electricity units :\n");
    scanf("%d" ,&units);
    switch(units)
    {
        case 1 ... 100:
        printf("The total bill in Rs is: 0");
        break;
        case 101 ... 200:
        printf("The total bill in Rs is : %lf",1.5*(units-100));
        break;
        case 201 ... 400:
        printf("The total bill in Rs is : %lf",(100*1.5)+(units-200)*2.5);
        break;
        default :
        printf("The total bill in Rs is : %lf",(100*1.5)+(200*2.5)+(units-400)*3.5);
    }
    return 0;
}