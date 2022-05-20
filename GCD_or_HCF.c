#include<stdio.h>
void gcd(int a, int b)
{
    int temp,c;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    c=a;
    while(a)
    {
        if(a%c==0 && b%c==0)
        {
            printf("%d",c);
            break;
        }
        c-=1;
    }
    
}
int main()
{
    int i,j,k,l;
    scanf("%d %d",&i,&j);
    gcd(i,j);
}