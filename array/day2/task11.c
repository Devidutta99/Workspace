#include<stdio.h>
int main()
{
    int a[10],i,s=0,n,s1;
    printf("\n enter the 10 number");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }   
    printf("\nsum of the number");
    for(i=0;i<5;i++)
    {
        s=s+a[i];
    }
    printf("\n sum1 of the number");
    for(i=5;i<10;i++)
    {
        s1=s1+a[i];
    }
    if(s==s1)
    {
        printf("%d",s);
    }
    else
    {
        printf("not equal");
    }
} 