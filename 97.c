// C program to print all prime numbers between two given numbers
#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int low, high;
    printf("Enter two numbers: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are:\n", low, high);
    for (int i = low; i <= high; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}