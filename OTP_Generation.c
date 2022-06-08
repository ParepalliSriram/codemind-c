#include<stdio.h>
int main()
{
    int i,j,k,c=0;
    scanf("%d",&i);
    while(i!=0)
    {
        j=i%10;
        i=i/10;
        c=c*10+j;
    }
    while(c!=0)
    {
        k=c%10;
        c=c/10;
        if(k%2!=0)
        {
            printf("%d",k*k);
        }
    }
}