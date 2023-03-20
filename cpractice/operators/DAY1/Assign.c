/*l value= l value= l value= expression*/
#include<stdio.h>
int main()
{
    int a=2,b=3,c=4;
    a= b+ (c*=4);
    printf("Value of a:%d\n",a);
    printf("Value of b:%d\n",b);
    printf("Value of c:%d\n",c);
}