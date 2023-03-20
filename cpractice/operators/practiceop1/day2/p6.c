#include<stdio.h>
int main()
{
    int a=35,b=40,c=75;
        if(a>b && a>c){
            printf("%d",a);
        }
         else if(b>a && b>c){
            printf("%d",b);
    }
     else{
            printf("%d",c);
     }
}