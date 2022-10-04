#include<stdio.h>
void odd(int);

void odd(int n)
{
    if(n>0)
    {
        odd(n-1);
        printf("%d",n*2-1);
    }
}
