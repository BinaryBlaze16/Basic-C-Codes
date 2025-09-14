#include <stdio.h>
int main() {
    int a,b,c,d;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(double);
    d=sizeof(char);
    printf("Size of int: %d bytes\n", a);
    printf("Size of float: %d bytes\n", b);
    printf("Size of double: %d bytes\n",c);
    printf("Size of char: %d byte\n", d);
    return 0;
}