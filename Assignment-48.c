#include <stdio.h>
int main() {
    int a, b, c, discriminant;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
        printf("Real and distinct roots.\n");
    else if (discriminant == 0)
        printf("Real and equal roots.\n");
    else
        printf("Imaginary roots.\n");

    return 0;
}