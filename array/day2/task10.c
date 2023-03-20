#include<stdio.h>
int main()
{
    int a[10],i,s=0,n;
    printf("\n enter the 10 number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }   
    printf("sum of the number");
    for(i=0;i<5;i++)
    {
        s=s+a[i];
    }  
    printf("sorted array=%d",s);
} 