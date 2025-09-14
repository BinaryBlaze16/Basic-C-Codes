#include <stdio.h>
int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to append: ");
    scanf("%d", &digit);
    num = num * 10 + digit;
    printf("Resulting number: %d\n", num);
    return 0;
}