#include<stdio.h>
int main()
{
    int a,c=1;
    scanf("%d", &a);
    while(a!=0)
    {
        c=a%10;
        a=a/10;
        printf("%d", c);
    }
    return 0;
}