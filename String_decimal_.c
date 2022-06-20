#include<stdio.h>
int main()
{
    int i,j,l;
    scanf("%d",&i);
    for(l=0;l<i;l++)
    {
        int k=0;
        char str[100];
        scanf("%s",str);
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]!='1' && str[j]!='2' && str[j]!='3' && str[j]!='4'&& str[j]!='5'&& str[j]!='6' && str[j]!='7' && str[j]!='8' && str[j]!='9' && str[j]!='0')
            {
                k+=1;
                printf("False
");
                break;
            }
        }
        if(k==0)
        {
            printf("True
");
        }
    }
}
    