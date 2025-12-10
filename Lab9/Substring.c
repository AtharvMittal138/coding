#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100],ch2[100];
    int l1,l2,l=0,pos=0;
    printf("Enter a string: ");
    gets(ch1);
    l1=strlen(ch1);
    printf("Enter the substring to be found: ");
    gets(ch2);
    l2=strlen(ch2);
    for (int i=0; i<l1; i++)
    {
        l=0;
        for(int j=0;j<l2;j++)
        {
            if(ch2[j]== ch1[i+j])
            l++;
            if(l>=1)
            pos=i+1;    
        }
        if(l==l2)
        break;
    }
    if(l==l2)
    printf("found between position %d and %d",pos,pos+l-1);
    else 
    printf("Substring not found");
    return 0;
}