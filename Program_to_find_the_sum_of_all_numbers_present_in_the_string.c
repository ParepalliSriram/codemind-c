#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s", str);
    int i, j, count=0;
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            count+=str[i]-48;
        }
    }
    printf("%d", count);
    return 0;
}