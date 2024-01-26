#include<stdio.h>
int main()
{
    int n,sum=0,sumofsquare=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sumofsquare+=i*i;
        sum+=i;
    }
    int squaresum=sum*sum;
    printf("%d",squaresum-sumofsquare);
}