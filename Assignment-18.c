#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter 3 ASCII codes: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("%d = %c\n%d = %c\n%d = %c\n", x, x, y, y, z, z);
    return 0;
}