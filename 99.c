#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Calculate sum of n-th powers of digits
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    // Check Armstrong condition
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}