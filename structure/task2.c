#include<stdio.h>
int main()
{
    int a,*p;
    p=&a;
    printf("addresss of %d",p);
    if(*p%sizeof(a)==0)
    {
        printf("allingned");
    }
    else
    {
        printf("\n allingned");
    }

}