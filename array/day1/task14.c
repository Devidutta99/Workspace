//common elements in the array
#include<stdio.h>
int main()
{
    int a[10][10],n,b[10][10],i,j,m;
    printf("\n enter the size of the elements");
    scanf("%d%d",&n,&m);
    printf("\n enter the elements a");
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of b");
    for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("common elements in the array");    
       for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==b[i][j])
            {
                printf("%d",a[i][j]);
            }
        }
    }
}