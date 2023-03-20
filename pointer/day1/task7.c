#include<stdio.h>
int main()
{
    
    int a=10;
    int *p=&a;
    a++;
    printf("value of %d\n",*p);
    printf("value of %x   \n",p);
}
