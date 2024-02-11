#include<stdio.h>
#include<string.h>
int main()
{
    int found=0,index=-1;
    char str[1000];
    scanf(" %[^
]s",str);
    char vowels[1000];
    scanf(" %[^
]s",vowels);
    for(int i=0;str[i]!=NULL;i++)
    {
        char ch=str[i];
        for(int j=0;vowels[j]!=NULL;j++)
        {
            if(ch==vowels[j])
            {
                found=1;
                index=i;
                break;
            }
        }
        if(found==1)
        {
            break;
        }
        
    }
    if(found==1)
    {
        printf("True
");
        printf("%d
",index);
    }
    else
    {
        printf("False");
    }
}