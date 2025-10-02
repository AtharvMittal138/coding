#include<stdio.h>
int main()
{
    int calls;
    printf("Enter your total number of calls :\n");
    scanf("%d" ,&calls);
    switch(calls)
    {
        case 0 ... 100:
        printf("The total bill is : 200 Rs");
        break;
        case 101 ... 150:
        printf("The total bill is : %lf",200+0.6*(calls-100));
        break;
        case 151 ... 200:
        printf("The total bill is : %lf",200+50*0.6+(calls-150)*0.5);
        break;
        default :
        printf("The total bill is : %lf",200+(50*0.6)+(50*0.5)+(calls-200)*0.4);
    }
    return 0;
}