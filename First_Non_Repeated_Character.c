#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    scanf("%d",&i);
    int k,l,m;
    for(k=0;k<i;k++)
    {
        int count=0,c=0,l,m,n;
        scanf("%d",&m);
        char str[100];
        scanf("%s",str);
        for(l=0;l<m;l++)
        {
            for(n=0;n<m;n++)
            {
                if(str[l]==str[n])
                {
                    count+=1;
                }
            }
            if(count==1)
            {
                c+=1;
                printf("%c
",str[l]);
                break;
            }
            count=0;
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
}