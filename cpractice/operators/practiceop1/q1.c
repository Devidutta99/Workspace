#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter the value\n");
    scanf("%d",&a);
    printf("the binary value is\n");
for (i=3;i>=0;i--)
{
    j=(a>>i) & 0x1;
    printf("%d position: %d\n",i,j);
}
}