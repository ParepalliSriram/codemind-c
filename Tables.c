#include<stdio.h>
int main()
{
    int a,b,c=1,d;
    scanf("%d%d", &a,&b);
    for(c=1;c<=b;c++)
    {
        if(c%2!=0)
        {
            printf("%d x %d = %d
", a,c,a*c);
        }
    }
}