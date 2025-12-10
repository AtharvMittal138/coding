#include<stdio.h>
int main()
{
    int num,start = 1, incre =2
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