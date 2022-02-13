#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, j, k, l, m;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        while(a[i]!=0)
        {
            printf("%d ", a[i]);
            break;
        }
    }
    for(i=0; i<size; i++)
    {
	while(a[i]==0)
        {
            printf("%d ", a[i]);
            break;
        }
    }
    return 0;
}