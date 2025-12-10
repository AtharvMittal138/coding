#include<stdio.h>
int main()
{
    int choice,years,months,EMIperLakh,TotalEMI;
    float LoanAmount=8000000;
    float downPayment= 0.1*LoanAmount;
    float financedAmount=LoanAmount-downPayment;
    float TotalAmount;
    printf("Housing loan EMI scheme: \n");
    printf("1. 1-5 years\n");
    printf("2. 6-10 years\n");
    printf("3. 11-15 years\n");
    printf("4. 16-19 years\n");
    printf("5. 20 years\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: EMIperLakh=1450,years=5;
        break;
        case 2: EMIperLakh=1325,years=10;
        break;
        case 3: EMIperLakh=1250,years=15;
        break;
        case 4: EMIperLakh=1175,years=19;
        break;
        case 5: EMIperLakh=1100,years=20;
        break;
        default: printf("Invalid choice!\n");
    }
    TotalEMI=EMIperLakh*(financedAmount/100000);
    TotalAmount=TotalEMI*years*12+downPayment;
    printf("The total amount to be paid at the end is: %f",TotalAmount);
    return 0;
}