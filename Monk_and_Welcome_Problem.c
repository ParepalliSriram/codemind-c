#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], b[size], i, j, k, l;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0; j<size; j++)
    {
        scanf("%d", &b[j]);
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d ", a[i]+b[i]);
            break;
        }
    }
    return 0;
}