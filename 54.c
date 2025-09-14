#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("The character is a lowercase alphabet");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("The character is an uppercase alphabet");
    }
    return 0;
}