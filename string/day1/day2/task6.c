//print total no word
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=1;
printf("\n enter the string ");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{

if(str[i+1]!=' '&& str[i]==' ')
{
    count++;
}
}
printf("no of word %d",count);
}
