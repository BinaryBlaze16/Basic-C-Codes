#include <stdio.h>
int main() {
    int hour, minute;
    printf("Enter time (HHMM): ");
    scanf("%2d%2d", &hour, &minute);
    printf("Time: %02d hour and %02d minute\n", hour, minute);
    return 0;
}