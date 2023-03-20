#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    n=(n*(n+1))/2;
    printf("the sum of numbers is:%d",n);
    return 0;
}