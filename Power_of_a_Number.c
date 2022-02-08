#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, M, r, ans;
    scanf("%d%d%d", &x, &y, &M);
    r=pow(x, y);
    printf("%d", r%M);
}