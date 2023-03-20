#include<stdio.h>
int main()
{
    print(10);
    return 0;
}
void print(int a)
{
    if(a<1)
        return;
    else
        printf("%d,",a);
    print(a/2);
}
