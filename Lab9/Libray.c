#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], str3[200];
    printf("Enter first string: ");
    gets(str1);    
    printf("Enter second string: ");
    gets(str2);
    printf("\nLength of first string = %d", strlen(str1));
    printf("\nLength of second string = %d", strlen(str2));
    strcpy(str3, str1);
    printf("\n\nAfter copying, third string = %s", str3);
    strcat(str1, str2);
    printf("\n\nAfter concatenation, string = %s", str1);
    return 0;
}