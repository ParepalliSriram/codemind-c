#include<stdio.h>
void f_n(int *fib, int i)
{
    int j,k,l=0;
    for(j=0;j<20;j++)
    {
        if(fib[j]==i)
        {
            l+=1;
            break;
        }
    }
    if(l>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int main()
{
    int i,j,fib[100];
    scanf("%d",&i);
    fib[0]=0;
    fib[1]=1;
    for(j=2;j<20;j++)
    {
        fib[j]=fib[j-2]+fib[j-1];
    }
    f_n(fib,i);
}