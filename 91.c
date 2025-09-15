// Program to find the nth Fibonacci number
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    if (n == 0) {
        printf("Fibonacci number at position %d is: %d\n", n, a);
    } 
    else if (n == 1) {
        printf("Fibonacci number at position %d is: %d\n", n, b);
    } 
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci number at position %d is: %d\n", n, b);
    }

    return 0;
}