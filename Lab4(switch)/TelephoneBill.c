#include<stdio.h>
int main()
{
    int calls;
    printf("Enter your total number of calls :\n");
    scanf("%d" ,&calls);
    switch(calls)
    {
        case 1 ... 150:
        printf("The total bill in Rs is: 0");
        break;
        case 151 ... 250:
        printf("The total bill in Rs is : %lf",0.9*(calls-150));
        break;
        case 251 ... 400:
        printf("The total bill in Rs is : %lf",(100*0.9)+(calls-250)*1.2);
        break;
        default :
        printf("The total bill in Rs is : %lf",(100*0.9)+(150*1.2)+(calls-400)*1.5);
    }
    return 0;
}