#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;  // cofficents of the quaditic equation
    double d,r1,r2; // roots of the equation
    printf("Enter the cofficent of x^2 : ");
    scanf("%d",&a);
    printf("Enter the cofficent of x : ");
    scanf("%d",&b);
    printf("Enter the value of the constant : ");
    scanf("%d",&c);
    d= (b*b)-(4*a*c);
    if(d>=0)
    {
    r1= (-b + sqrt(d))/(2*a);
    r2= (-b - sqrt(d))/(2*a);
    printf("The roots of the equation are : %lf , %lf", r1,r2);
    }
    else
    printf("The roots are imaginary");
    return 0;
}
