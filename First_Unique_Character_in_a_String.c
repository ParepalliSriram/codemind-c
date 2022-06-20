#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,j,k,d=0;
    for(i=0;str[i]!=NULL;i++)
    {
        int c=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]==str[i])
            {
                c+=1;
                
            }
        }
        if(c==1)
        {
            d+=1;
            printf("%d",i);
            break;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}