#include <stdio.h>
#include <string.h>
void checkPalindrome(char str[]) 
{
    char rev[100];
    strcpy(rev, str);      // copy original string
    strrev(rev);           // reverse the copied string

    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    checkPalindrome(str);
    return 0;
}