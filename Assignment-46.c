#include<stdio.h>
int main()
{
    int x;
    printf("Enter a three digit number: ");
    scanf("%d", &x);
    if (x > 100 && x < 999)
    {
        printf("The number is within the range.\n");
    }
    else
    {
        printf("The number is out of range.\n");
    }
    printf("\n");
    return 0;
}