#include<stdio.h>
int main()
{
    int a;
    printf("enter the no");
    scanf("%d",&a);
if(a>0)
{
    printf("The no is positive");
    }
    else if (a<0)
    {
        printf("the no is negative");

    }
    else
    {
        printf("it is zero");
    }
    return 0;
}