#include<stdio.h>
void square(int);

void square(int n)
{
    if(n>0)
    {
        square(n-1);
        printf("%d",n*n);

    }
}
