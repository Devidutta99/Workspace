// array addition
#include<stdio.h>
int main()
{
    int a[10][10],n,b[10][10],c[10][10],i,j;
    printf("\n enter the size of the elements");
    scanf("%d",&n);
    printf("\n enter the elements a");
    for(int i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of b");
    for(int i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n addition value");
    for(int i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n dispalying the elements");
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d \n",c[i][j]);
        }
    }
}