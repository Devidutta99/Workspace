//print string in reverse order in a line
#include<stdio.h>
int main()
{
    int i,n,count=0;
    char str[100];
    printf("enter the no of string  ");
    gets(str);
     for(i=0;str[i]!='\0';i++)
     {
    printf("%c",str[i]);
    count++;
     }
     
    printf("\n%d",count);
    for(i=count-1;i>=0;i--)
    {
        printf("\t%c",str[i]);
    }
}