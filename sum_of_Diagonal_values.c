#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j,k=0,l,arr[100][100],co=0;
    for(i=0;i<r;i++)
    {
        for(l=0;l<c;l++)
        {
            scanf("%d",&arr[i][l]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(l=0;l<c;l++)
        {
        	if(l==i || l==r-1-i)
        	{
        		co+=arr[i][l];
			}
        }
    }
    printf("%d",co);
}