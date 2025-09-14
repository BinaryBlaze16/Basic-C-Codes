#include <stdio.h>
int main() {
    char a, b, c;
    printf("Enter 3 characters: ");
    scanf(" %c %c %c", &a, &b, &c);
    printf("%c = %d\n%c = %d\n%c = %d\n", a, a, b, b, c, c);
    return 0;
}