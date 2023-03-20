//pallindrome in string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,length,flag=0;
    char str[20];
    printf("\n enter the string  ");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1]);
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
    printf("not a pallindrome %s",str);
    }
    else
    {
        printf("pallindrome %s",str);
    }
    return 0;
}
    