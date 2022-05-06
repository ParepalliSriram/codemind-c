#include<stdio.h>
int AU(int *arr,int n,int j)
{
    int count=0,i,l=0,m;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=j)
        {
            count+=1;
        }
        if(arr[i]>j)
        {
            l+=2;
        }
    }
    m=count+l;
    return m;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100],i,j,k,l,m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&j);
    k=AU(arr,n,j);
    printf("%d",k);
}