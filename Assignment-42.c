#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x%5==0)
    {
        printf("The number is divisible by 5.\n");
    }
    else{
        printf("The number is not divisible by 5.\n");
    }
    printf("\n");
    return 0;
}
