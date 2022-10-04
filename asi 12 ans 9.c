#include<stdio.h>
void convert_octal(int);


void convert_octal(int n)
{
    if(n>0)
    {
        convert_octal(n/8);
        printf("%d",n%8);
    }
}

