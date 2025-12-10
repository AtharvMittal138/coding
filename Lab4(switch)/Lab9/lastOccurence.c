#include<stdio.h>
#include<string.h>
int main(){
char ch[100],l,num,pos=0;
printf("Enter a string: ");
gets(ch);
l=strlen(ch);
printf("Enter the character to be found: ");
scanf("%c",&num);
for(int i=0;i<l;i++)
{
    if(ch[i]==num)
    pos=i+1;
}
if(pos==0)
printf("Element not found ");
else
printf("Element last found at the position: %d",pos);
return 0;
}