#include <stdio.h>

int main() {
    int a, b, temp, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    printf("HCF of %d and %d is: %d\n", a, b, hcf);

    return 0;
}