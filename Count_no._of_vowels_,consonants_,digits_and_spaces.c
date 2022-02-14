#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]", str);
    int i, v=0, c=0, d=0, ws=0;
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            d+=1;
        }
        else if(str[i]==' ')
        {
            ws+=1;
        }
        else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            v+=1;
        }
        else
        {
            c+=1;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d", v, c, d, ws);
    return 0;
}