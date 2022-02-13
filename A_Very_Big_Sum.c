#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    long long int a[size], i, j=0;
    for(i=0; i<size; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        j+=a[i];
    }
    printf("%lld", j);
    return 0;
}