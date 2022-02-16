#include<stdio.h>
int main()
{
    int l, b, w, i, j, c;
    scanf("%d %d %d %d",&l, &b, &w, &c);
    if(l<=2*w || b<=2*w)
    {
        printf("Impossible");
    }
    else
    {
        i=l*b-((l-2*w)*(b-2*w));
        j=i*c;
        printf("%d", j);
    }
}