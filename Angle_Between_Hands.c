#include<stdio.h>
#include<math.h>
int main()
{
    char str[10];
    scanf("%s",str);
    int a=str[0]-48;
    a=a*10+(str[1]-48);
    int b=str[3]-48;
    b=b*10+(str[4]-48);
    float hrs=0.5*(a*60+b);
    float min_angle=6*b;
    float angle=abs(hrs - min_angle);
    if(360-angle<angle)
    {
        angle = 360-angle;
    }
    printf("%.1f",angle);
}