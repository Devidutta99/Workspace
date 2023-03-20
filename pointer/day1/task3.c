#include<stdio.h>
int swap(int*,int*);
int main()
{
    int a,b,c;
    a=20;
    b=10;
    printf("before swapping two number is %d %d\n",a,b);
    swap(&a,&b);
    printf("after swapping %d %d",a,b);
}
int swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    
}