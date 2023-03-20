#include<stdio.h>
int main()
{
    int a=100;
    int *p=&a;
    p=p+5;
    printf("%u\n%u\n",a,p);
}