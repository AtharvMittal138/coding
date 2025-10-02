#include<stdio.h>
int main(){
    float m1,m2,m3,m4,p;
    m1=32; //marks in english
    m2=38; //marks in maths
    m3=33; //marks in physics
    m4=27; //marks in chemistry
    p=(m1+m2+m3+m4)*100/(40*4);
    printf("The percentage of the four subjects is: %f",p);
    return 0;
}