#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i=0;
    while((int)(log2(i))+1 <= n)
    {
        int k=n-1, l;
        while(k>=0)
        {
            if(((1<<k)&i) > 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            k--;
        }
        printf("
");
        i++;
    }
}