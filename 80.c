#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number which you want to print a table:\n");
    scanf("%d",&n);
    i=1;
    while(i<=10){
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}