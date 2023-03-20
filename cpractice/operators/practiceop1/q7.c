#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the value\n");
    scanf("%d",&a);
    printf("the binary value is\n");
for (i=7;i>=0;i--)
{
    j=(a>>i) & 0x1;
    printf("%d",j);
}
b=~a;
printf("\nThe binary complement of that no is:\n");
for (i=7;i>=0;i--)
{
    j=(b>>i) & 0x1;
    printf("%d",j);
}

}