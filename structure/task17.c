#include<stdio.h>
int main()
{
    struct alphabets
    {
        char firstletter;
        struct aplphabets a;
    }
}al;
al.firstletter='a';
printf("%c",al.firstletter);