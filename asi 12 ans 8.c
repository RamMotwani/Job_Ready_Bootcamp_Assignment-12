#include<stdio.h>
void convert_binary(int);
int main()
{
    convert_binary(18);
}


void convert_binary(int n)
{
    if(n)
    {
        convert_binary(n/2);
        if(n%2==1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
