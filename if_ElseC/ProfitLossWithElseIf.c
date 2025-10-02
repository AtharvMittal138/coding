#include<stdio.h>
int main(){
    int cp,sp,p;
    printf("Enter the cost price : ");
    scanf("%d",&cp);
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    p=sp-cp;
    if(sp>cp){
        printf("He made a profit\n");
    }
    if(sp<cp){
        printf("He made loss\n");
    }
    else if(sp==cp){
        printf("He made neither profit nor loss");
    }
    else{
        printf("He made profit of : %d",p);
    }
    if(p<0){
        printf("He made loss of : %d",(-1)*p);
    }
    return 0;
}