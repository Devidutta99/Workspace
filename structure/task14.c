#include<stdio.h>
int main()
{
    struct branch
    {
        char bran [10]="Bangalore";//error on declaration
        int bpin=431;
    };
    struct headoff
    {
        char head[10];
        int hpin;
    };
    struct headoff h={"chennai",01};
    struct branch b;
    printf("ho %s\n hpin %d",h.head,h.hpin);
    printf("bo %s\n bpin %d ",b.bran,b.bpin);
}