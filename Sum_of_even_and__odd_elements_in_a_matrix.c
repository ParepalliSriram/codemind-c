#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int i,j,k,arr[r][c];
    for(i=0;i<r;i++)
    {
        for(k=0;k<c;k++)
        {
            scanf("%d",&arr[i][k]);
        }
    }
    int ev=0,od=0;
    for(i=0;i<r;i++)
    {
        for(k=0;k<c;k++)
        {
            if(arr[i][k]%2==0)
            {
                ev+=arr[i][k];
            }
            else
            {
                od+=arr[i][k];
            }
        }
    }
    printf("%d %d",ev,od);
}