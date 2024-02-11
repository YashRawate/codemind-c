#include<stdio.h>
int main()
{
    int n,m,sum=0,sum2=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    for(int j=1;j<m;j++)
    {
        if(m%j==0)
        {
            sum2+=j;
        }
    }
    if(sum==m && sum2==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}