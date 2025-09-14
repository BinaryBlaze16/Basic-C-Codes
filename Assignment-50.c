#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    printf("Greatest number: %d\n", max);

    if ((a == max && b == max) || (b == max && c == max) || (a == max && c == max))
        printf("The greatest number appears more than once.\n");

    return 0;
}