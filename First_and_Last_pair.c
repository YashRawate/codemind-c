#include<stdio.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        printf("%d %d ",arr[i],arr[j]);
    }    
    if(i==j)
    {
        printf("%d 0",arr[i]);
    }
}