#include<stdio.h>
int main()
{
	int s,l;
	scanf("%d%d", &s,&l);
	int a[s][l],i,j,k,count=0;
	for(i=0;i<s;i++)
	{
		for(j=0;j<l;j++)
		{
		scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<l;j++)
		{
		count+=a[i][j];
		}
	}
	printf("%d",  count);
}