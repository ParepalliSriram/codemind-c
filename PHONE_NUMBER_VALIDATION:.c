#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s", str);
    int i, j, count=0;
    if(strlen(str) == 10 && str[0]!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}