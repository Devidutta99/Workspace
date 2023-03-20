#include<stdio.h>
int main()
{
    int a=10,b=4,c=3;
    printf("the no is %d\n",sizeof(a%5==0)?b:c);
}