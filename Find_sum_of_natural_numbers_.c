#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d", &a);
    while(a!=0)
    {
        c+=a;
        a=a-1;
    }
    printf("%d", c);
    return 0;
}