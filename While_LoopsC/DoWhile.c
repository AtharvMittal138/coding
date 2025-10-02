#include<stdio.h>
int main(){
    int i=10;
    do{
       printf("Hello"); // will run atleast one time even if the condition fails
       i++; 
    }
    while(i<10);
    return 0;
}