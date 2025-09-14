#include <stdio.h>
int main() {
    float cp, sp;
    printf("Enter Cost Price and Selling Price of 12 bananas: ");
    scanf("%f%f", &cp, &sp);
    cp /= 12;
    sp /= 12;
    float profit = (sp - cp) * 25;
    printf("Profit/Loss on 25 bananas: %.2f\n", profit);
    return 0;
}