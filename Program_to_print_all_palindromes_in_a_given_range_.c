#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int org=i;
        int rev=0;
        int temp=i;
        while(temp!=0)
        {
            rev=rev*10+temp%10;
            temp=temp/10;
        }
        if(org==rev)
        {
            printf("%d ",rev);
        }
    }
}