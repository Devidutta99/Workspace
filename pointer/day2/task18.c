//base address of array a is 200
//address of ppointer  p is 1000.
//address of pointer q is 2000.
#include<stdio.h>
int main()
{
    int a[]={3,2,5,0,31,45,7,67,9};
    int  *q,*p;
    p=a;
    q=&a[0]+3;
    printf("%u%u%u\n",(*p)++,*p++,*++p);
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)++);
    q--;
    printf("%d",(*q+2)--);
    printf("%d",(*))
    return 0;
}
