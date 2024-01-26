#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    char maxc=NULL;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>maxc)
        {
            maxc=str[i];
        }
    }
    if(maxc!=NULL)
    {
        printf("%c",maxc);
    }
}