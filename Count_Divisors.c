#include<stdio.h>
int main()
{
    int l, r, k, a, count=0;
    scanf("%d %d %d", &l, &r, &k);
    for(a=l; a<=r; a++)
    {
        if(a%k == 0)
        {
            count+=1;
        }
    }
    printf("%d", count);
    return 0;
}