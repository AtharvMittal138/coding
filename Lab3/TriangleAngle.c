#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double s,area;
    printf("Enter the three sides of a triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    s=(a+b+c)/2;
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is : %lf",area);
    }
    else
    printf("The three given sides do not form a valid triangle");

    return 0;
}