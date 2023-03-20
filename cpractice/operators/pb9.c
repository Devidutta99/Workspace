#include<stdio.h>
int main()
{
    int x,y;
    x=9;
    y=6;
        printf("Before Swapx=%dy=%d\n",x, y);
        x=x+y;
        y=x-y;
        x=x-y;
        
    printf("After Swap x=%dy=%d\n",x, y);
    return 0;
}
