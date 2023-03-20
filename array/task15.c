//insertion of the array 
#include<stdio.h>
int main()
{
    int a[10],n,i,j,pos=2,value=31;
    printf("\n enter the size of the elements");
    scanf("%d",&n);
    printf("\n enter the elements a");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n insertion of an element");
    if(pos>=n+1)
    {
        printf("no insertion is done");
    }
    else
    {
        for(i=pos-1;i<n;i++)
        {
            a[i+1]=a[i];
            a[pos-1]=value;
        }
    }
    printf("\n resultend array");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}