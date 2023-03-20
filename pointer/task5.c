//void pointer*/
#include<stdio.h>
int main()
{
    void *p;
    int a=10;
    float b=1.2;
    char ch='a';
    p=&a;
    printf("value of %d\n",*(int*)p);
    p=&b;
    printf("value of %f\n",*(float*)p);
    p=&ch;
    printf("value of %c\n",*(char*)p);
}