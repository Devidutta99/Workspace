#include<stdio.h>
int main(){
    int reg=11100000,n,d;
    int l=00000001;
    printf("Which bit position to be on");
    scanf("%d",n);
    printf("hello");
    d=reg|(l<<n);
    
    printf("After turning on %d bit position:%d",n,d);
} 