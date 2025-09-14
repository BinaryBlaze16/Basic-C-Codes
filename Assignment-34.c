#include <stdio.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    x = x - (x % 10);
    printf("Modified number: %d\n", x);
    return 0;
}