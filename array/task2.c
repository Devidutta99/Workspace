
#include<stdio.h>
int main()
{
    int a[10],n;
    printf("\n enter the size of the elements");
    scanf("%d",&n);
    printf("\n enter the elements");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("dispalying the elements");
    for(int i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}