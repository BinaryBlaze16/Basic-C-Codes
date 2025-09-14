#include <stdio.h>
int main() {
    int num, last, rotated;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    last = num % 10;
    rotated = last * 100 + num / 10;
    printf("Rotated number: %d\n", rotated);
    return 0;
}