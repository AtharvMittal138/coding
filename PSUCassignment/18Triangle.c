#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of three sides: \n");
    scanf("%d %d %d", &a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        if(a==b && b==c && c==a)
        printf("It is a equilateral triangle");
        else if(a==b || b==c || c==a )
        printf("It is an isosceles triangle");
        else if( a*a == ( b*b)+(c*c) || b*b == (a*a)+(c*c) || c*c==(a*a)+(b*b) )
        printf("It is a right angled triangle");
        else
        printf("It is a scalene triangle");
    }
    else
    printf("This triangle is not possible");
    return 0;
}