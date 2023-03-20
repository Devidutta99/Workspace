#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("%d\n%d\n%d\n%d",a,*p,**q,***r);
}