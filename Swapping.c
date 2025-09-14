#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the vaule of A :");
    scanf("%d",&a);
    printf("Enter the vaule of B :");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After the swapping the vaule :\nA=%d\nB=%d\n",a,b);
    return 0;

    
}