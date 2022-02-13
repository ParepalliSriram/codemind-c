#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, j, k, l, count=0, pro=0;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        while(a[i]!=0)
        {
            j=a[i]%10;
            a[i]=a[i]/10;
            count+=1;
        }
        if(count%2==0)
        {
            pro+=1;
            //printf("%d", count);
        }
        count=0;
    }
    printf("%d", pro);
    return 0;
}