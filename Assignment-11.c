#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    float avg = (a + b + c) / 3;
    printf("Average: %.2f\n", avg);
    return 0;
} 