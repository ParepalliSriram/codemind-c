#include<stdio.h>
void pn(int i,int j)
{
    int l,k,count=0;
    for(l=i;l<=j;l++)
    {
        while(l!=0)
        {
            k=l%10;
            break;
        }
        if(k==2 || k==3 || k==9)
        {
            count+=1;
        }
    }
    printf("%d",count);
    printf("
");
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],b[100],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        pn(a[i],b[i]);
    }
}