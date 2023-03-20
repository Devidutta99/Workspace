//bubble short
#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("\n enter the number of the elements");
    scanf("%d",&n);
    printf("\n enter the elements a");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\n sorting  elements");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("\n sorted elements ");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}

 