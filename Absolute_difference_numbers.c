#include<stdio.h>
int main()
{
    int a,b,c=0,d,e,f,g=0,h,i,j=0,k=0,count=0,res;
    scanf("%d %d",&a, &b);
    while(a!=0)
    {
        count+=1;
        d=a%10;
        a=a/10;
        c=c*10+d;
        if(count==b)
        {
            f=c;
        }
    }
    while(f!=0)
    {
        e=f%10;
        f=f/10;
        g=g*10+e;
    }
    while(c!=0)
    {
        k+=1;
        h=c%10;
        c=c/10;
        j=j*10+h;
        if(k==b)
        {
            break;
        }
    }
    res=g-j;
    if(res<0)
    {
        printf("%d",res*(-1));
    }
    else
    {
        printf("%d",res);
    }
}