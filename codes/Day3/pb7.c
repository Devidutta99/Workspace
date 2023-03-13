#include<stdio.h>
int main()
{
        int h,m,sec,s;
	sec=25300;
        h=sec/3600;
        m=(sec-h*3600)/60;
	s=sec-h*3600-m*60;
        printf("There are:%dh%dm%ds",h,m,s);
 return 0;
}


