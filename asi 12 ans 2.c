#include<stdio.h>
void reverseN(int);

void reverseN(int n)
{
    if(n>0)
    {
    printf("%d",n);
    reverseN(n-1);
    }
}
