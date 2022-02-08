#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, e, rev=0, reverse=0;
    scanf("%d", &a);
    c=a*a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        rev=rev*10+b;
    }
    d=rev*rev;
    while(d!=0)
    {
        e=d%10;
        d=d/10;
        reverse=reverse*10+e;
    }
    if(c == reverse)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}