#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,c=0,max=0,s,a[100];
    float m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
        }
        if(c>max)
        {
        	max=c;
            s=a[i];
        }
        c=0;
    }
    printf("%d",s);
}