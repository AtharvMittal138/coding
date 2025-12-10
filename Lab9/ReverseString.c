#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100],ch2[100];
    int l,m=0;
    printf("Enter a string: ");
    gets(ch1);
    l=strlen(ch1);
    for(int i=l-1;i>=0;i--)
    {
       ch2[m]=ch1[i];
       m++; 
    }
    ch2[m]='\0';
    printf("Reversed = %s",ch2);
    return 0;

}