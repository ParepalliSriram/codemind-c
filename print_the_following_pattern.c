#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    for(b=a; b>=1; b--)
    {
        for(c=a; c>=1; c--)
        {
            printf("%d ", c);
        }
        printf("
");
        
    }
	return 0;
}