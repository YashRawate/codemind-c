#include<stdio.h>
int main()
{
    int n,sum=0,prod=1;
    scanf("%d",&n);
    while(n!=0)
    {
        int a=n%10;
        sum+=a;
        prod*=a;
        n/=10;
    }
    int diff=prod-sum;
    printf("%d",diff);
}