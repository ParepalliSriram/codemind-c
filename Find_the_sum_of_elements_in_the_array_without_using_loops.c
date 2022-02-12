#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, c=0;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
    	c+=a[i];
	}
    printf("%d", c);
    return 0;
}