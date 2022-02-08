#include<stdio.h>
int main()
{
    int a, b, c=0, t=0;
    scanf("%d", &a);
    t=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        c+=b;
    }
    if(t%c!=0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}
