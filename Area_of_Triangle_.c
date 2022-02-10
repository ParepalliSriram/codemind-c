#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s;
    float ans;
    scanf("%f %f %f", &a, &b, &c);
    s=(a+b+c)/2;
    ans=sqrt(s*((s-a)*(s-b)*(s-c)));
    printf("%.2f", ans);
    return 0;
}