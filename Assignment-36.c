#include <stdio.h>
int main() {
    float inr, usd;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    usd = inr / 84.23;
    printf("Amount in USD: %.2f\n", usd);
    return 0;
}