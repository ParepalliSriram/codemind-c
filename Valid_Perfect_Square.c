#include<stdio.h>
#include<math.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, c, d;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        c=sqrt(a[i]);
        if(pow(c, 2)==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}