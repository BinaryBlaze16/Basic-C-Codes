#include<stdio.h>
int main()
{
    int i=1;
    int n;
    printf("Enter the number of terms you want to print\n");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}