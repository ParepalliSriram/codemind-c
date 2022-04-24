#include<stdio.h>
int prime(int a)
{
    int i,j,count=0,t;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count+=1;
        }
    }
    if(count!=2)
    {
        return t=1;
    }
    else
    {
        return t=0;
    }
    
}
int main()
{
    int a,b,count=0,d;
    scanf("%d", &a);
    for(b=1;b<=a;b++)
    {
        if(a%b==0)
        {
            count+=prime(b);
        }
    }
    printf("%d", count);
}