#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*) malloc(100 * sizeof(int));
    printf("%d\n",*ptr);
    int* ptr2 = (int*) calloc(100 , sizeof(int));
    printf("%d\n",*ptr2);
    char* ptr3 = (char*) malloc(100 * sizeof(char));
    printf("%d\n",*ptr3);
    char* ptr4 = (char*) calloc(100 , sizeof(char));
    printf("%d\n",*ptr4);
}
