#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],ar2[100],i,j,k=0,p,q,r,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            for(p=i;p<n;p++)
            {
                if(arr[p]==1)
                {
                    count+=1;
                }
                else
                {
                    break;
                }
            }
            ar2[k++]=count;
            count=0;
            i=p;
        }
    }
    int max=ar2[0];
    for(i=0;i<k;i++)
    {
        if(ar2[i]>max)
        {
            max=ar2[i];
        }
    }
    printf("%d",max);
}