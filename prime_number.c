#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a%2 == 0 || a%3 == 0 || a%4 == 0 || a%5 == 0 || a%6 == 0 || a%7 == 0 || a%8 == 0 || a%9 == 0)
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }
    return 0;
}