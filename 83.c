#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
        i++;
    }
    printf("Sum is %d",s);
    return 0;
}