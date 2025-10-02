#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the point (x,y): ");
    scanf("%d %d", &x, &y);
    if(x==0 && y==0)
    printf("It lies on Origin");
    else if(x==0)
    printf("It lies on y-axis");
    else if(y==0)
    printf("It lies on x-axis");
    else 
    printf("The point doesnt lies on x or y axis");
    return 0;
}