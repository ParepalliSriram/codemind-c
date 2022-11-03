#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    scanf("%d",&i);
    int k,l,m;
    for(k=0;k<i;k++)
    {
        char str[100];
        scanf("%s",str);
        int count=0,l,m;
        for(l=0;l<strlen(str);l++)
        {
            if(str[l]==str[l+1])
            {
                count+=1;
            }
        }
        printf("%d
",count);
    }
}