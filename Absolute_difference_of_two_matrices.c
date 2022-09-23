#include<stdio.h>
#include<math.h>
int main()
{
    int r,c;
    scanf("%d",&r);
    int i,j,k=0,l,arr[100][100],brr[100][100],co=0,ar2[100],m=0,n=0;
    for(i=0;i<r;i++)
    {
        for(l=0;l<r;l++)
        {
            scanf("%d",&arr[i][l]);
            co+=arr[i][l];
        }
    }
    for(i=0;i<r;i++)
    {
        for(l=0;l<r;l++)
        {
            scanf("%d",&brr[i][l]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(l=0;l<r;l++)
        {
            ar2[m++]=abs(arr[i][l]-brr[i][l]);
        }
    }
    int count=0;
    for(l=0;l<m;l++)
    {
        printf("%d",ar2[l]);
        count+=1;
        if(count==r)
        {
            printf("
");
            count=0;
        }
        else
        {
            printf(" ");
        }
    }
}