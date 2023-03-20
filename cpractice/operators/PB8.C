#include<stdio.h>
int main()
{
    int x,y;
    x=2;
    y=6;
        int temp;
        printf("Before Swap\nx=%dy=%d",x, y);
        temp=x;
        x=y;
        y=temp;
        
    printf("\nAfter Swap\nx=%dy=%d",x, y);
    return 0;
}
