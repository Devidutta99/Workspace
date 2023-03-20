#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9};
    int *p=&a;
    int i;
    printf("%x\n",(p+4));
    printf("%x\n",(p+0));
    printf("%x\n",(p+1));
    printf("%x\n",(p+2));
    printf("%x\n",(p+3));
    printf("%x\n",(p+5));
    printf("%x\n",(p+6));
    printf("%x\n",(p+7));
    printf("%x\n",(p+8));
    printf("%x\n",(p+9));
}