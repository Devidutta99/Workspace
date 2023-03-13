#include<stdio.h>
int main()
{
        int a=10;
	char b;
	float c=10;
        printf("\n%ld\n",sizeof((a%5!=0)?b:a));
        return 0;
}

