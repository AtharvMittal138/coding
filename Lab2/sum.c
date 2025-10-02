#include<stdio.h>
int main()
{
    int number;
    printf("Enter a four digit number : ");
    scanf("%d", &number);
    int digit1=number/1000;
    int digit2=(number/100)%10;
    int digit3=(number/10)%10;
    int digit4=number%10;
    int sum = digit1+digit2+digit3+digit4;
    if(number>=1000 && number<=9999)
    printf("The sum of the digits is : %d",sum);
    else
    printf("Enter a valid four digit number");
    return 0;
}