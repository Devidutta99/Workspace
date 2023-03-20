//odd number of 5 integer
#include<stdio.h>
int main()
{
    int a[10],i,s=0,n,s1=0;
    printf("\n enter the 10 number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }   
    printf("\n odd number");
     for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d",a[i]);
        }
    }
} 
