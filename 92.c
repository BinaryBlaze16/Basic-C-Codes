#include <stdio.h>

int main() {
    int n;
    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } 
    else if (n == 1) {
        printf("%d\n", a);
    } 
    else {
        printf("Fibonacci Series: ");
        printf("%d %d ", a, b); // print first two numbers

        for (int i = 2; i < n; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}