#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter the number of terms you want to print\n");
    scanf("%d",&n);
    i=0;
    j=0;
    while(i<=n){
        if(j%2!=0)
        printf("%d\n",j);
        i++;
        j++;

    }
}