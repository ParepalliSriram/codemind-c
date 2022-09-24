#include<stdio.h>
#include<math.h>
int deci(int a)
{
    int i,j,c=0,d=0;
    while(a!=0)
    {
        i=a%10;
        a=a/10;
        c+=i*pow(8,d);
        d+=1;
    }
    return c;
}
int main()
{
    int i;
    scanf("%d",&i);
    int a,b,c=0,d,arr[100];
    b=deci(i);
    while(b!=0)
    {
        a=b%2;
        b=b/2;
        arr[c++]=a;
    }
    for(a=c-1;a>=0;a--)
    {
        printf("%d",arr[a]);
    }
}