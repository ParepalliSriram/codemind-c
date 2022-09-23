#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j,k=0,l,arr[100][100],co=0,co2=0,ar2[100];
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
            if(i%2==0)
            {
        	    co+=arr[i][l];
            }
            else
            {
                co2+=arr[i][l];
            }
        }
    }
    printf("%d %d",co,co2);
}