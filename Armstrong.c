#include<stdio.h>
int main()
{

    printf("The armstrong number between 1 and 500 is:\n");
    for(int i=1;i<=500;i++)
    {
        int a,digit,num=0;
        a=i;
        while(a != 0)
        {
            digit=a%10;
            num=num+digit*digit*digit;
            a=a/10;
        }
        if(num ==i)
        printf("%d\n",num);
    }
    return 0;
}