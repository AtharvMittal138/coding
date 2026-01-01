#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr=(int*)malloc(20*4);
    printf("%p\n",ptr);
    ptr=realloc(ptr, 22*4);
    printf("%p\n",ptr);
}