#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],ar2[100],i,k=0,p=0,q,c=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        c=c*10+arr[i];
    }
    c=c+1;
    while(c!=0)
    {
        q=c%10;
        c=c/10;
        ar2[p++]=q;
    }
    for(i=p-1;i>=0;i--)
    {
        printf("%d ",ar2[i]);
    }
}