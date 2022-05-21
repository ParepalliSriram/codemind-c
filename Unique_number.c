#include<stdio.h>
void uni_ele(int *arr,int c)
{
	int i,j,k=0;
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<=c;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("Not Unique Number");
				k+=1;
				break;
			}
		}
		if(k>0)
		{
			break;
		}
	}
	if(k==0)
	{
		printf("Unique Number");
	}
}
int main()
{
	int i,j,k,arr[100],c=0;
	scanf("%d",&i);
	while(i!=0)
	{
		j=i%10;
		i=i/10;
		arr[c++]=j;
		
	}
	uni_ele(arr,c);
}