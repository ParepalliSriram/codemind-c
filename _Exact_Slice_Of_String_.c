#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,j,k,l;
    scanf("%d%d",&i,&j);
    for(k=i;str[k]!=NULL;k++)
    {
        printf("%c",str[k]);
        if(k==j)
        {
            break;
        }
    }
}