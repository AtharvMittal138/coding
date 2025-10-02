#include <stdio.h>
int main(){
    int n;
    int fac=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    printf("The factorial of the given number is : %d", fac);
    return 0;
}