#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,arr[n][n],i,k,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            scanf("%d",&arr[i][k]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            if(i==k)
            {
                c1+=arr[i][k];
            }
            if(k==n-i-1)
            {
                c2+=arr[i][k];
            }
        }
    }
    printf("Principal Diagonal:%d
",c1);
    printf("Secondary Diagonal:%d",c2);
}