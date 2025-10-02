#include<stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
{
    if(i%2 == 0)
    {
        sum=sum-i;
    }
    else
    {
        sum=sum+i;
    }

}
printf("The sum of the series is : %d",sum);
return 0;
}