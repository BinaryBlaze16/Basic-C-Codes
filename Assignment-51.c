#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>99 && a<1000)
    {
        printf("The number is a three digit number");
    }
    else
    {
        printf("The number is not a three digit number");
    }
    return 0;
}