#include<stdio.h>
int gr_sm(int *a, int *b, int *c,int *g,int *s)
{
    if(*a>*b && *a>*c)
    *g= *a;
    else if(*b>*c)
    *g= *b;
    else
    *g=*c;
    if(*a<*b && *a<*c)
    *s= *a;
    else if(*b<*c)
    *s= *b;
    else
    *s=*c;  
}
int main()
{
    int x,y,z,gre,sm;
    printf("Enter the value of Three Numbers:\n");
    scanf("%d %d %d",&x,&y,&z);
    gr_sm(&x,&y,&z,&gre,&sm);
    printf("Greatest= %d\n",gre);
    printf("Smallest= %d",sm);
    return 0;
}