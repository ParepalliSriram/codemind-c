#include<stdio.h>
int main()
{
    int n,i,j,k,c;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",64+k);
        }
        k=k-1;
        printf("
");
    }
}