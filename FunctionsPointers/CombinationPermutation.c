#include<stdio.h>
// int factorial(int a){
//     int fac=1;
//     for(int i=2;i<=a;i++)
//     {
//         fac=fac*i;
//     }
//     return fac;
// }
int main(){
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    int nfac=factorial(n);
    int rfac=factorial(r);
    int nrfac=factorial(n-r);
    int ncr= nfac/(rfac*nrfac);
    printf("Combination= %d\n",ncr);
    int npr=nfac/nrfac;
    printf("Permutation= %d",npr);
    return 0;
}
int factorial(int a){
    int fac=1;
    for(int i=2;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;
}