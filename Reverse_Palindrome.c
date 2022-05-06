#include<stdio.h>
int rp(int a)
{
    int i,j,k=0,l,m,n=0,o;
    i=a;
    while(a!=0)
    {
        j=a%10;
        a=a/10;
        k=k*10+j;
    }
    l=i+k;
    m=l;
    while(l!=0)
    {
        o=l%10;
        l=l/10;
        n=n*10+o;
    }
    if(n==m)
    {
        return n;
    }
    else
    {
        rp(m);
    }
}
int main()
{
    int i,l;
    scanf("%d",&i);
    l=rp(i);
    printf("%d",l);
}