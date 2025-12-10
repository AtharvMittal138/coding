#include <stdio.h>
int main(void)
{
    int a[3][5],sum=0;
    int marks[5];
    for(int k=0;k<5;k++)
    marks[k]=0;
    for(int i = 0;i<3;i++)
    {
        sum=0;
        printf("Enter the marks of the student %i:\n",(i+1));
        for(int j =0;j<5;j++)
        {
            printf("Marks %i:\n",(j+1));
            scanf("%d",&a[i][j]);
            marks[j] = a[i][j]+marks[j];
            sum = sum + a[i][j];
        }
        printf("Sum of marks of Student %i: %i\n",(i+1),sum);
    }
    for(int m = 0;m<5;m++)
    {
        printf("The average of subject %i: %lf\n",(m+1),(marks[m]/3.0));
    }
}