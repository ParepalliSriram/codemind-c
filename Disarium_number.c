#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c=0, d, i, ans=0, count=0, t, v;
    scanf("%d", &a);
    t=a;
    v=a;
    while(a!=0)
    {
        b=a%10;//175=5
        a=a/10;
        count+=1;
	}
    while(t!=0)
    {
        b=t%10;//175=5
        t=t/10;
        ans+=pow(b,count);
        //c+=ans;
        count--;
        /*printf("%d ", ans);*/
	}
	if(ans == v)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}