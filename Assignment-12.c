#include <stdio.h>
int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    float circumference = 2 * 3.14 * radius;
    printf("Circumference: %.2f\n", circumference);
    return 0;
}