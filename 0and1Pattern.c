#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter number of rows to be printed: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++) // if(i%2==1)
        {                    // a=1;
           if((i+j)%2==0)    // else
            printf("1 ");    // a=0;
             else            // for(int j=1;j<=i;j++)
           printf("0 ");     // {           
        }                    //     printf("%d ",a);
        printf("\n");        //     if(a==0)
    }                        //     a=1;
    return 0;                //     else
}                            //     a=0;   
                             // }