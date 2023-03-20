//largest and smallest number in the array
#include<stdio.h>
int main()
{
    int a[10],i,s=0,n,avg=0,largest,smallest,b[10],c[10];
    printf("\n enter the 10 number");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n greatest of the array");
     for(i=0;i<8;i++)
    {
        scanf("%d",&b[i]);
    }
    largest=a[0];
    for(i=0;i<8;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    printf("\nlargest=%d",largest);
    smallest=a[0];
    for(i=0;i<8;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<8;i++)
    {
    if(smallest>a[i])
    {
        smallest=a[i];
    }
}
 printf("\n smallest=%d",smallest);
}

