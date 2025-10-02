#include<stdio.h>
int main (){
    int p;
    printf("Enter your percentage : ");
    scanf("%d",&p);
    if(p>90)
    printf("Excellent");
    else if(p>80)
    printf("Very good");
    else if(p>70)
    printf("Good");
    else if(p>60)
    printf("Can do better");
    else if(p>50)
    printf("Average");
    else if(p>40)
    printf ("Below Average");
    else
    printf("Fail");
    return 0;
}