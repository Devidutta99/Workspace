#include<stdio.h>
int main()
{
    int a[10],n,i,temp,j;
    printf("\n enter the size of the elements");
    scanf("%d",&n);
    printf("\n enter the elements a");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse an array");
    for(i=0,i=n-1;i++;j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    printf("\n resultant array");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}