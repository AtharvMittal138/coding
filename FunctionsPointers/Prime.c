#include <stdio.h>
int isPrime(int num);
int main() {
    int n, count = 0, num = 2;
    printf("Enter how many prime numbers you want: ");
    scanf("%d", &n);
    printf("First %d prime numbers are:\n", n);
    while (count < n) {
        if (isPrime(num))
        {
            printf("%d ", num); 
            count++;            
        }
        num++;
    }
    return 0;
}
int isPrime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}