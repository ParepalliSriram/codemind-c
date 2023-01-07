#include<stdio.h>
void rotate(char *str,int n,int l)
{
    int i;
    for(i=0;i<n/2+1;i++)
    {
        char s=str[i];
        str[i]=str[n-i];
        str[n-i]=s;
    }
}
int main()
{
    int a,z;
    scanf("%d",&a);
    for(z=0;z<a;z++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        char str[200];
        scanf("%s",str);
        int i;
        for(i=n-1;i>=0;i--)
        {
            rotate(str,i,m);
        }
        printf("%s
",str);
    }
}