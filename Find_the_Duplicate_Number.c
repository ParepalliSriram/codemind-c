#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],p,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(p=0;p<n;p++)
        {
            if(arr[p]==arr[i])
            {
                count+=1;
            }
        }
        if(count>1)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}