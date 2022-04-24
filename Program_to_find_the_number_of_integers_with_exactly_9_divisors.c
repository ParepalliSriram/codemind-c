#include<stdio.h>
int main()
{
    int a,b,count=0,temp=0;
    scanf("%d", &a);
    int i,j,k,l;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
		
            if(i%j==0)
            {
                count+=1;
                
            }
        }
        if(count==9)
        {
            printf("%d ", i);
            temp+=1;
        }
        count=0;
    }
    printf("
Total=%d", temp);
}