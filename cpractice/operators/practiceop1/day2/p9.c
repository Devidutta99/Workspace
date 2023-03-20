#include<stdio.h>
int main(){
    int a=22,b=21;
    printf("%s\n",(a>b)?"Swap":"Don't Swap");
    if(a>b){
        printf("Before swap%d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("After swap%d\n",a,b);
    }
    else {
        printf("Don't Swap %d %d\n",a=a,b=b);
    }
}