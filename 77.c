#include<stdio.h>
int main()
{
    int i;
    printf("Enter the starting number\n");
    scanf("%d",&i);
    while(i>=1){
        if(i%2==0)
        printf("%d\n",i);
        i--;

    }
}