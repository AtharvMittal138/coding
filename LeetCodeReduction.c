#include <stdio.h>
int gcd(int a, int b)
{
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() 
{
    int t;
    scanf("%d", &t);
    static int a[200000];
    while (t--) 
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int mn = a[0];
        for (int i = 1; i < n; i++)
            if (a[i] < mn)
                mn = a[i];
        int g = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] != mn) 
            {
                int diff = a[i] - mn;
                if (diff < 0) diff = -diff;
                g = (g == 0) ? diff : gcd(g, diff);
            }
        }
        if (g == 1)
            printf("%d\n", mn + 1);
        else
            printf("%d\n", mn);
    }
    return 0;
}
