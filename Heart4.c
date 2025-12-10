#include <stdio.h>
#include <windows.h>
int main()
{
    int n,s=0,n2,n3;
    printf("Enter heart size (recommended 6 to 30): ");
    scanf("%d", &n);
    n2=n;
    if (n < 4)
    {
        printf("Too small! Try 6 or more.\n");
        return 0;
    }
    for(int i = n/2; i < n; i+=2)
    {
        s++;
    }
    n=n-s;
    s=0;
    for(int i = n/2; i <= n; i += 2)
    {
        s++;
    
    }
    n3=n+s;
    if(n3 != n2)
    n=n+1;
    // Upper part (two semi-circles)
    for (int i = n / 2; i <=n; i += 2) 
    {
        for (int j = 1; j < n - i; j += 2)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("**");
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("**");
        printf("\n");
        Sleep(80);
    }
    // Lower part (inverted triangle)
    for (int i = n; i >= 1; i--) 
    { 
        if ( i==1 && (n2+1)%5==0)
        break;
        {
        for (int j = i; j < n; j++)
            printf("  ");
        for (int j = 1; j <= (i * 2) - 1; j++)
            printf("**");
        printf("\n");
        Sleep(80);
        }
    }
    return 0;
}