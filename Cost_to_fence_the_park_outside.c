#include<stdio.h>
int main()
{
    int l, b, w, c, i, j, k;
    scanf("%d%d%d%d", &l, &b, &w, &c);
    if((l-2*w)>=2*w || (b-2*w)>=2*w)
    {
        printf("impossible");
    }
    else
    {
        i=((l+2*w)*(b+2*w))-l*b;
        j=i*c;
        printf("%d", j);
    }
}