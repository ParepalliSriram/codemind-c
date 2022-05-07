#include<stdio.h>
int hp(int a)
{
    int i,j,count=0;
    while(a!=0)
    {
        i=a%10;
        a=a/10;
        count+=(i*i);
    }
    return count;
}
int main()
{
    int i,j;
    scanf("%d",&i);
    while(i>=10)
    {
        j=hp(i);
        i=j;
    }
    if(j==1 || j==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}