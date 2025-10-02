#include<stdio.h>
int main (){
    int r,s,a;
    printf("Enter the age of Ram : ");
    scanf("%d",&r);
    printf("Enter the age of Shyam : ");
    scanf("%d",&s);
    printf("Enter the age of Ajay : ");
    scanf("%d",&a);
    if(r<s)
    {
        if(r<a)
        printf("Ram is the youngest of three");
        else
        printf("Ajay is the youngest of the three");
    }
    else{
        if (s<a)
        printf("shyam is the youngest of the three");
        else
        printf("Ajay is the youngest of the three");
    }
    return 0;
}