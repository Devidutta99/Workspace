//base address of array a is 200
//address of ppointer  p is 1000.
//address of pointer q is 2000.


#include<stdio.h>
int main()
{
    int a[]={21,32,-2,0,1,3,5,-7,11};
    int *p=a;
    int *q=&a[4];
    int d=p-q;
    printf("%d %d %d\n",d,*p,q);
    *q=25;
    *(p+1)=27;
    q=q-3;
    p=p+3;
    d=p-q;
    printf("%u %u %u %u %u\n",*p,*q,p,q,d);
}
