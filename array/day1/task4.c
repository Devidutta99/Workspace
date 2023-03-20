//diagonal elements of an array
#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,m;
    printf("\n enter the size of the elements");
    scanf("%d%d",&m,&n);
    printf("\n enter the elements a");
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enetr the elements [%d,%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n diagoanl elements");
    if(m==n)
    {
        for( i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
            if(i==j)
            {
                printf("%d\t",a[i][j]);
            }    
        }
    }
}
}