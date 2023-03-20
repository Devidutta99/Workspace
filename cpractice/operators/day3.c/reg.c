#include<stdio.h>
int main()
{
    register int a;
    printf("How many times want to run:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    printf("%d",i);
}
}