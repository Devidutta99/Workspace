//deletion of an array
#include<stdio.h>
int main()
{
    int a[10],n,i,j,pos=2;
    printf("\n enter the size of the elements");
    scanf("%d",&n);
    printf("\n enter the elements a");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n deletion  of an element");
    if(pos>=n+1)
    {
        printf("deletion is not done");
    }
    else
    {
        for(i=pos-1;i<n;i++)
        {
            a[i]=a[i+1];
        }
    }
    printf("\n resultend array");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}