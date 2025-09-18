#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (gcd(num1, num2) == 1) {
        printf("%d and %d are Co-Prime.\n", num1, num2);
    } else {
        printf("%d and %d are NOT Co-Prime.\n", num1, num2);
    }
    return 0;
}