#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Enter the first cordinate (x1,y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the second cordinate (x2,y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the third cordinate (x3,y3): ");
    scanf("%f %f", &x3, &y3);
    float s1,s2;
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1==s2)
    printf("The lines are collinear");
    else
    printf("The lines are not collinear");
    return 0;
}