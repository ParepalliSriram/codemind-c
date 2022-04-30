#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int fib[i],l,k;
    fib[0]=0;
    fib[1]=1;
    for(l=2;l<i;l++)
    {
        fib[l]=fib[l-1]+fib[l-2];
    }
    for(l=0;l<i;l++)
    {
        printf("%d ", fib[l]);
    }
}