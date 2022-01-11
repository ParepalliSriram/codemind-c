#include<stdio.h>
#include<math.h>
int main()
{
    int a,c,d;
    scanf("%d", &a);
    c=sqrt(a);
    d=c*c;
    if(a==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
