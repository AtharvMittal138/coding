#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    printf("Enter your choice :\n");
    printf("1. Area of circle\n");
    printf("2. Area of rectangle\n");
    printf("3. Area of triangle\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        {
         double r, pi=3.14;
         printf("Enter the radius of the circle :\n");
         scanf("%lf", &r);
         double area1 = pi*r*r;
         printf("The area of the circle is : %lf\n",area1);
        }
        case 2:
        {
         double l,b2;
         printf("Enter the length and breadth of the rectangle :\n");
         scanf("%lf %lf",&l,&b2 );
         double area2 = l*b2;
         printf("The area of the rectangle is : %lf\n",area2);
        }
        case 3:
        {
         double a,b3,c;
         printf("Enter the sides of the triangle :\n");
         scanf("%lf %lf %lf", &a,&b3,&c);
         double s=(a+b3+c)/2;
         double area3= sqrt(s*(s-a)*(s-b3)*(s-c));
         printf("The area of the triangle is : %lf\n", area3);
       
        }
        default: printf("Wrong Input");
    }
    return 0;
}