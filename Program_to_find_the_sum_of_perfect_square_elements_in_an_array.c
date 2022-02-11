#include<stdio.h>
#include<math.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, j, k, l, c=0;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=size; i++)
    {
        j=sqrt(a[i]);
        k=j*j;
        if(k==a[i])
        {
            c+=k;
        }
    }
    printf("%d", c);
    return 0;
}