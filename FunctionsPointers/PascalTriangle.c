#include<stdio.h>
int factorial(int a){
    int fac=1;
    for(int i=2;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;
}
combination(int n,int r){
    int nfac=factorial(n);
    int rfac=factorial(r);
    int nrfac=factorial(n-r);
    int ncr= nfac/(rfac*nrfac);
    return ncr;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for (int k=n-i;k>0;k--)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++){
        int icj=combination(i,j);
        printf("%d  ",icj);
    }
    printf("\n");
    
}
return 0;
}
    
   