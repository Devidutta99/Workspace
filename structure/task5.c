
#include<stdio.h>
int main()
{
    struct simp
    {
        int i=6;//errror in the program
        char city[]="chennai";

    };
    struct simp s1;
    printf("%d"s1.city);
    printf("%d",s1.i);

}