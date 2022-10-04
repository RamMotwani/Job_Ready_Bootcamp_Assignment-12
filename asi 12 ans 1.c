#include<stdio.h>
void printN(int);

void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d",n);
    }

}
