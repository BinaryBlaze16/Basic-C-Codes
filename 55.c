#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
    {
        printf("The number is divisible by 2 and 3");
    }
    else
    {
        printf("The number is not divisible by 2 and 3");
    }
    return 0;
}