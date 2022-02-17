#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, j, k, l;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<size; i++)
    {
        if(a[i]%2!=0)
        {
            if(i%2==0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}