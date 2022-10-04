#include<stdio.h>
void evenreverse(int);

void evenreverse(int n)
{
    if(n>0)
    {
        printf("%d",n*2);
        evenreverse(n-1);
    }
}

