#include<stdio.h>
int main(){
    int year ,month;
    int days=0;
    printf("Enter the year : ");
    scanf("%d",&year);
    printf("Enter the month number : ");
    scanf("%d", &month);
    for(int i=1; i<=month; i++)
    {
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
        days=days+31;
        else if(i==4 || i==6 || i==9 || i==11)
        days=days+30;
        else if(i==2)
        {
            if(year % 4 == 0 &&(year % 100 !=0 || year % 400 ==0))
            days=days+29;
            else
            days=days+28;
        }
    }
    printf("The total number of days are : %d",days);
    return 0;
}