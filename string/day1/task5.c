#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[20],length;
    printf(" enter the string");
    gets(s);
    length=strlen(s);
    for(i=length;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}