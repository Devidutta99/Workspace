//sorting in alphabeti
#include<stdio.h>
#include<string.h>
//#define ITEM 10
//#define MAXCHAR 20
int main()
{
    char str[100][100],s[100];
    int i,j,n;
    printf("enter the number of names");
    scanf("%d",&n);
    printf("enter the string  ");
    for(i=0;i<n;i++)
    {
    scanf("%s",str[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(s,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],s);
            }
        }
    }
    printf("sorting order");
    for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
}