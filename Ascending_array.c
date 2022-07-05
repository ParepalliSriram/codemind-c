#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(a[i]<a[i-1])
            {
                printf("no");
                break;
            }
            else
            {
                printf("yes");
                break;
            }
        }
        else if(a[i]>=a[i+1])
        {
            printf("no");
            break;
        }
    }
}