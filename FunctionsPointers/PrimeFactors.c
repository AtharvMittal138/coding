#include <stdio.h>
// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
// Function to print prime factors
void primeFactors(int num) {
    printf("Prime Factors of %d are: ", num);
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            printf("%d ", i);
        }
    }
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    primeFactors(num);
    return 0;
}
