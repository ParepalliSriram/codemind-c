#include<stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d", &a);
	if(a>=3 && a<=100)
	{
	for(b=1; b<=a; b++)
	{
		for(c=1; c<=b; c++)
		{
			printf("*");
		}
		printf("
");
	}
	for(b=1; b<a; b++)
	{
		for(c=a; c>b; c--)
		{
			printf("*");
		}
		printf("
");
	}
	}
	else
	{
	    printf("The pattern is not possible");
	}
	return 0;
}