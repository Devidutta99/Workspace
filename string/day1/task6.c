#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char s[100];
    printf(" enter the string ");
    gets(s);
    for(i=0;i<=s[i];i++)
    {
        if(s[i]== ' ')
        {
            count++;
        }
     
    }
    printf(" %d",count+1);
}