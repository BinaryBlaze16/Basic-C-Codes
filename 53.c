#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your marks in 5 subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
    {
        printf("You have passed the exam");
    }
    else
    {
        printf("You have failed the exam");
    }

    return 0;
}