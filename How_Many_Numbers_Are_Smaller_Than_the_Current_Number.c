#include<stdio.h>
int s(int *a,int n,int i)
{
    int count=0,j;
    for(j=0;j<n;j++)
    {
        if(a[j]<i)
        {
            count+=1;
        }
    }
    return count;
}
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
        j=s(a,n,a[i]);
        printf("%d ",j);
    }
}