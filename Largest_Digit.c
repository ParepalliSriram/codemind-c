#include<stdio.h>
int main()
{
    int a, b, c, d=0;
    scanf("%d" , &a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(b>d)
        {
            d=b;
        }
    }
    printf("%d", d);
    return 0;
}