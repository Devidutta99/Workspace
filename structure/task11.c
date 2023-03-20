#include<stdio.h>
struct decl
{
    int n=100;//compilation
}d1;
int main()
{
    printf("%d",d1.n);
    return 0;
}