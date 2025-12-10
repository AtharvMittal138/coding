#include<stdio.h>
int main(){
    char ch[100];
    int n=0,l,i=0;
    printf("Enter the string: ");
    gets(ch);
    while(ch[i] != '\0')
    {
    if(ch[i]==' ' && ch[i+1]!=' '&& ch[i+1]!='\0')
        n++;
        i++;
    }
    if(n==0)
    printf("The number of words = 0");
    else if(ch[0]==' ')
    printf("The number of words = %d",n);
    else
    printf("The number of words = %d",n+1);
    return 0;
}