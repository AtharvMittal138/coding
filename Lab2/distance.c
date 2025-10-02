#include <stdio.h>
int main(){
    double mm,cm,inch,feet;
    printf("Enter distance in millimeters : ");
    scanf("%lf", &mm);
    cm=mm/100;
    inch=2.5*cm;
    feet=12*inch;
    printf ("%lf mm = %lf cm \n", mm,cm);
    printf("%lf mm = %lf inch\n", mm,inch);
    printf("%lf mm = %lf feet\n", mm,feet);
    return 0;
}