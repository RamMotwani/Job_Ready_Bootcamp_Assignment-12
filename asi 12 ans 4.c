void oddreverse(int);

void oddreverse(int n)
{
    if(n>0)
    {
        printf("%d",n*2-1);
        oddreverse(n-1);
    }
}
