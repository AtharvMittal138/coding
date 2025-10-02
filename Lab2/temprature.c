#include<stdio.h>
int main(){
    double tempinc, tempinf;
    int question;
    printf("1. Fahrenheit to Centigrade\n");
    printf("2. centigrade to Fahrenheit\n");
    printf("Enter the question number to be solved : ");
    scanf("%d", &question);
    if(question==1)
    {
        printf("Enter temprature in fahrenheit : ");
        scanf("%lf", &tempinf);
        tempinc=(tempinf-32)*5/9;
        printf("The temprature in centigrade is : %lf",tempinc);
    } else if (question ==2)
    {
        printf("Enter temprature in centigrade : ");
        scanf("%lf", &tempinc);
        tempinf=(tempinc*9/5)+32;
        printf("The temprature in fahrenheit is : %lf",tempinf);
    }
    return 0;
}