// Program to find the next prime number after a given number
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n, next;
    printf("Enter a number: ");
    scanf("%d", &n);

    next = n + 1;
    while (!isPrime(next)) {
        next++;
    }

    printf("Next prime number is: %d\n", next);
    return 0;
}