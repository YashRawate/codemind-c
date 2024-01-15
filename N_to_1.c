#include<stdio.h>
void n_1(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d ",n);
    n_1(n-1);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    n_1(n);
    return 0;
}