#include<stdio.h>
int main(){
    int marks;
    printf("Enter your quiz marks out of 10 : ");
    scanf("%d",&marks);
    if(marks==9 || marks==10)
    printf("Grade A");
    if(marks==7 || marks==8)
    printf("Grade B");
    if(marks==5 || marks==6)
    printf("Grade C");
    if(marks==3 || marks==4)
    printf("Grade D");
    if(marks<3)
    printf("Grade F");
    return 0;
}