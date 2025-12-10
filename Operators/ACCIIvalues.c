#include<stdio.h>
int main()
{
    char ch='A';
    int v=65;
    printf("The ASCII values of the alphabets are:\n");
    for(int i=1;i<=26;i++)
    {
        printf("%c = %d\n",ch,v);
        ch=ch+1;
        v++;
    }
    return 0;
}