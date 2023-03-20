#include<stdio.h>
void count();
int main()
{
    count();
    count();
    count();
    count();
}

void count(){
  int a=1;
    printf("time%d,address of :%x\n",a++,&a);
    

}