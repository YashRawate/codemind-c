#include<stdio.h>
int main()
{
    int n,sum=0,sum2=0,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int a=n%10;
        sum+=a;
        n/=10;
    }
    while(sum!=0)
    {
        int b=sum%10;
        sum2+=b;
        sum/=10;
    }
    while(sum2>9)
    {
        int temp=sum2;
        sum2=0;
        while(temp!=0)
        {
            int c=temp%10;
            sum2+=c;
            temp/=10;
        }
    }
    printf("%d",sum2);
}