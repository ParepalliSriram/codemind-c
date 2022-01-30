#include<stdio.h>
int main()
{
    int a,i,c=0,p=1;
    scanf("%d", &a);
    while(a!=0)
    {
        i=a%10;
        a=a/10;
        c+=i;
        p*=i;
    }
    if(p == c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}