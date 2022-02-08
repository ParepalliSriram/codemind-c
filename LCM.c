#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    for(c=1; c<=b; c++)
    {
        d=a*c;
        if(d%b == 0)
        {
            printf("%d", d);
            break;
        }
    }
    return 0;
}