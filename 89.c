#include<stdio.h>
int main()
{
    int a,b,l,i,flag=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(i=2,l=1,flag=0;a>1||b>1;){
        if(a%i==0)
        {
            a=a/i;
            flag=1;
        }
        if(b%i==0)
        {
            b=b/i;
            flag=1;
        }
        if(flag==1)
        {
            l=l*i;
            flag=0;
        }
        else
        {
            i++;
        }

    }
    printf("LCM is %d",l);
    return 0;
} 