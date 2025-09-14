#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    if(x>0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is non-positive.\n");
    }
    return 0;
}