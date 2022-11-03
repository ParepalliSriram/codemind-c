#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    char s1[100],s2[100],s3[100];
    int i,j,k,l=0,m=0,n=0,a=0,b=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            s2[m++]=str[i];
        }
        else
        {
            s1[l++]=str[i];
        }
    }
    for(i=m-1;i>=0;i--)
    {
        s3[n++]=s2[i];
    }
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            printf("%c",s3[a]);
            a+=1;
        }
        else
        {
            printf("%c",s1[b]);
            b+=1;
        }
    }
}