//searching of an element
#include<stdio.h>
int main()
{
    int a[10],i,s=0,n,avg=0,pos,flag;
    printf("\n enter the number to be searched ");
    scanf("%d",&n);
    printf("\n enter the 8 number");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
    if(a[i]==n)
    {
        flag=1;
        break;
    }
    }
    if(flag ==1)
    {
        printf("element is found");
        printf("position =%d",i);
    }
    else
    {
        printf("element is nit found");
    }
    
}
