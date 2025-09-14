#include<stdio.h>
int main()
{
    int n,sum=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>=1)
    {
        sum=sum*n;
        n--;
    }
    printf("factorial is %d",sum);
    return 0;

}
