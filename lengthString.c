#include<stdio.h>
int main(){
    char ch[100];
    int i=0;
    printf("Enter the length of the string: ");
    gets(ch);
    while(ch[i]!='\0')
    {
        i++;
    }
    printf("The length of the string= %d",i);
    return 0;
}