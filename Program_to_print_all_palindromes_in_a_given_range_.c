#include<stdio.h>
int pr_i(int s)
{
    int i,j,k,l=0,cou=0,pro=0;
    k=s;
    while(s!=0)
        {
            j=s%10;
            s=s/10;
            cou=cou*10+j;
        }
        if(cou==k)
        {
            l=cou;
        }
        return l;
    
    
}
int main()
{
    int a,b,c,count=0;
    scanf("%d%d", &a,&b);
    for(c=a;c<=b;c++)
    {
        if(pr_i(c)!=0)
        {
        printf("%d ", pr_i(c));
        }
    }
    
    return 0;
}