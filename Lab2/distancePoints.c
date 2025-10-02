#include<stdio.h>
#include <math.h>
int main(){
    float x1,y1,x2,y2,dist;
    printf("Enter x1 : ");
    scanf("%f",&x1);
    printf("Enter y1 : ");
    scanf("%f",&y1);
    printf("Enter x2 : ");
    scanf("%f",&x2);
    printf("Enter y2 : ");
    scanf("%f",&y2);
    dist=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("The distance between the points (x1,y1) and (x2,y2) is : %f",dist);

    return 0;
}