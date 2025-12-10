#include<stdio.h>
int main(){
   char ch[100],l=0;
   printf("Enter a string: ");
   gets(ch);
   for(int i=0; ch[i]!='\0';i++)
   {
    if(ch[i]>=97 && ch[i]<=122)
    ch[i]=ch[i]-32;
   }
   printf("\n");
   puts(ch);
   return 0;
}