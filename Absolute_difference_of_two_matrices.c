#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,l,arr[n][n],ar2[n][n];
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
            scanf("%d",&ar2[i][k]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            printf("%d",abs(arr[i][k]-ar2[i][k]));
            if(k!=n-1)
            {
                printf(" ");
            }
        }
        printf("
");
    }
}