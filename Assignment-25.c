#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("number without last digit %d",x/10);
    printf("\n");
    return 0;
}