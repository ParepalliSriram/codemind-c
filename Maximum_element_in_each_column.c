#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a,b,c,arr[n][m],i,k,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
            scanf("%d",&arr[i][k]);
        }
    }
    for(i=0;i<m;i++)
    {
        int m=0;
        for(k=0;k<n;k++)
        {
            if(arr[k][i]>m)
            {
                m=arr[k][i];
            }
        }
        printf("%d
",m);
    }
}