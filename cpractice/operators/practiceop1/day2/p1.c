#include<stdio.h>
int main()
{
    int a=10;
    printf("the value of a :%d\n",a++);
    sizeof(a++);
    printf("%d",a);
}