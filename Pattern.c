#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    for(b=1; b<=a ; b++)
    {
        for(c=1; c<=a; c++)
        {
            printf("%d ", b);
        }
        printf("
");
    }
    return 0;
}