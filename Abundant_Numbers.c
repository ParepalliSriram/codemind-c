#include<stdio.h>
int main()
{
    int a, b, count=0, d, e;
    scanf("%d", &a);
    e=a;
    for(b=1; b<a; b++)
    {
        if(a%b==0)
        {
            count+=b;
        }
    }
    if(count>e)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}