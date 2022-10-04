#include<stdio.h>
void even(int);


void even(int n)
{
    if(n>0)
    {
        even(n-1);
        printf("%d",n*2);
    }
}
