//array program on GPS
#include<stdio.h>//defining the library
int main()//main function
{
    int i;//declaring a variable i
    char x[]={"$gpgga,181908.00,3404.7.041778,N,07044.3966270,w,4,13,1.00,495.144,M,0.10,0000*40"};
    for(i=18;i<32;i++)//looping is going under the condition
    {
        printf("latitude is %c\n",x[i]);//printing the operation
    }
    printf("\n");
    for(i=33;i<49;i++)// looping is going under the condition
    {
        printf("latitude is %C\n",x[i]);//printing the operation
    }
}