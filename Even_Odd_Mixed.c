#include<stdio.h>
int main()
{
    int i,j,s,k,l=0,cou=0,pro=0,a,b;
    scanf("%d", &s);
    a=s;
    int p,q,r=0;
    while(s!=0)
    {
    	p=s%10;
    	s=s/10;
    	r+=1;
	}
    while(a!=0)
        {
            j=a%10;
            a=a/10;
            if(j%2==0)
            {
                l+=1;
            }
            else
            {
                cou+=1;
            }
        }
        if(l==r)
        {
            printf("Even");
        }
        else if(cou==r)
        {
            printf("Odd");
        }
        else
        {
            printf("Mixed");
        }
        return 0;
}