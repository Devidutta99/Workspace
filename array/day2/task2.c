#include<stdio.h>
int main(void)
{
    int buf[10]={1,2,3,4,5,6,9,9};
    char p;
    p=(buf+1)[5];
    printf("%d",p);
}