#include<stdio.h>
int main()
{
    int n,i ;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=2;
    while(i<=n-1){
        if(n%i==0)
        {
            break;
        }
        i++;
    }
    if(i==n)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    return 0;
}