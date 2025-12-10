#include<stdio.h>
int main()
{
    int a;
    for(int i=1 ; i<=5 ; i++)
    {
        if(i<=3)
         a=i;
        else
        a=i+2*(i-3);

        for(int j=1; j<=i; j++)
        {
            printf("%d  ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}