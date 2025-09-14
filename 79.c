#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of terms you want to print\n");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d\n",i*i*i);
        i++;

    }
    return 0;
}