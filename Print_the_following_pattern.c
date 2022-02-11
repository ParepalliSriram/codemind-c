#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        for(c=b; c<=a; c++)
        {
            printf("%d ", c);
        }
        printf("
");
    }
    return 0;
}