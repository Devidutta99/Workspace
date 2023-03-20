//even and odd number in the array
#include<stdio.h>
int main()
{
    int a[10],i,s=0,n,s1=0;
    printf("\n enter the 10 number");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }   
    printf("\nsum of the even number");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
    }
    printf("\nsum of the odd number");
     for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            s1=s1+a[i];
        }
    }
    printf("\n display sum of even number %d",s);
    printf("\n display odd of even number %d",s1); 
}

       