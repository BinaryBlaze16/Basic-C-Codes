#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        printf("The character is a lowercase alphabet");
    }
    else if(a>='A' && a<='Z')
    {
        printf("The character is an uppercase alphabet");
    }
    else if(a>='0' && a<='9')
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is a special character");
    }
    return 0;
}