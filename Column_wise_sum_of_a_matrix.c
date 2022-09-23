#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j,k=0,l,arr[100][100],co=0,ar2[100];
    for(i=0;i<r;i++)
    {
        for(l=0;l<c;l++)
        {
            scanf("%d",&arr[i][l]);
        }
    }
    for(i=0;i<c;i++)
    {
        for(l=0;l<r;l++)
        {
        	co+=arr[l][i];
        }
        printf("%d ",co);
        co=0;
    }
}