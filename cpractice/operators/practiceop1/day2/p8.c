#include<stdio.h>
int main(){
    int a=12345,pin;
    printf("Enter your atm pin :");
    scanf("%d",&pin);
    printf("%s",pin==a?"Proceed":"Incorrect Password");
}