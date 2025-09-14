#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost price and selling price: ");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        printf("Profit");
        printf("Amount of profit: %d", sp - cp);
        printf("Percentage of profit: %.2f%%", ((float)(sp - cp) / cp) * 100);
    }
    else if(cp>sp)
    {
        printf("Loss");
        printf("Amount of loss: %d", cp - sp);
        printf("Percentage of loss: %.2f%%", ((float)(cp - sp) / cp) * 100);
    }
    else
    {
        printf("No profit no loss");
    }
    return 0;
}