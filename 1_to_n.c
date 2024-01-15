#include<stdio.h>
void oneton(int n)
{
    if(n==0)
    {
        return;
    }
    oneton(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    int n;
    scanf("%d ",&n);
    oneton(n);
    return 0;
}