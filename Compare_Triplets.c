#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,count=0,alice=0,bob=0;
    scanf("%d%d%d
%d%d%d", &a,&b,&c,&d,&e,&f);
    if(a>d && a>=1 && b>=1)
    {
        alice+=1;
    }
    if(a<d && a>=1 && b>=1)
    {
        bob+=1;
    }
    if(b>e && b>=1 && e>=1)
    {
        alice+=1;
    }
    if(b<e && b>=1 && e>=1)
    {
        bob+=1;
    }
    if(c>f && c>=1 && f>=1)
    {
        alice+=1;
    }
    if(c<f && c>=1 && f>=1)
    {
        bob+=1;
    }
    printf("%d %d", alice,bob);
    return 0;
}