#include<stdio.h>
int main()
{
    int i,b,j,a;
    printf("Enter the value\n");
    scanf("%d",&a);
    printf("the binary value is\n");
for (i=7;i>=0;i--)
{
    j=(a>>i) & 0x01;
    printf("%d",j);
}
b=a&0xf8;
printf("\n the binary masked value is\n");
for (i=7;i>=0;i--)
{
    j=(b>>i) & 0x01;
    printf("%d",j);
}
}