#include<stdio.h>
int main()
{
    int n,even=0,odd=0,mixed=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int a=n%10;
        if(a%2==0)
        {
            even=1;
        }
        else
        {
            odd=1;
        }
        n=n/10;
    }
    if(even==1 && odd==1)
    {
        mixed=1;
    }
    if(mixed==1)
    {
        printf("Mixed");
    }
    else if(even==1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}