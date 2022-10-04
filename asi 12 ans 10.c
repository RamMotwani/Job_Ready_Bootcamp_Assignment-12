#include<stdio.h>
void number_reverse(int);

void number_reverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        number_reverse(n/10);

    }
}
