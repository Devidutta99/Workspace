#include<stdio.h>
int main()
{
    int a;
    printf("Enter a no:");
    scanf("%d",&a);
    if(a%2==0)
{
    printf("%d it is an even no\n",a);
}
else
{
    printf("%d it is an odd no\n",a);
}
return 0;
}