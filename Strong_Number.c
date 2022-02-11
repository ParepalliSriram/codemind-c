#include<stdio.h>
int main()
{
    int a, b, c, d=1, e=0, f;
    scanf("%d", &a);
    f=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        for(c=b; c>0; c--)
        {
            d*=c;
        }
        e+=d;
        d=1;
    }
    if(e==f)
    {
        printf("The number %d is a strong number", f);
    }
    else
    {
        printf("The number %d is not a strong number", f);
    }
    return 0;
}