#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,k,l,r=0,c=0,arr[n][m],arrr[100];
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
            scanf("%d",&arr[i][k]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
            r+=arr[i][k];
        }
        arrr[c++]=r;
        r=0;
    }
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            r+=arr[k][i];
        }
        arrr[c++]=r;
        r=0;
    }
    int max=arrr[0];
    for(i=0;i<c;i++)
    {
        if(arrr[i]>max)
        {
            max=arrr[i];
        }
    }
    printf("%d",max);
}