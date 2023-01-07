#include<stdio.h>
int sort(int arr[],int n)
{
    int ar2[n],q;
    for(q=0;q<n;q++)
    {
        ar2[q]=arr[q];
    }
    int i,k,l;
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                int t=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=t;
            }
        }
    }
    for(l=0;l<n;l++)
    {
        if(arr[l]!=ar2[l])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n],k,l;
        for(k=0;k<n;k++)
        {
            scanf("%d",&arr[k]);
        }
        if(sort(arr,n)==1)
        {
            printf("0
");
        }
        else
        {
            int ma=arr[0],mi=arr[0],l,m;
            for(l=0;l<n;l++)
            {
                if(arr[l]>ma)
                {
                    ma=arr[l];
                }
                if(arr[l]<mi)
                {
                    mi=arr[l];
                }
            }
            printf("%d
",ma-mi);
        }
        
    }
}