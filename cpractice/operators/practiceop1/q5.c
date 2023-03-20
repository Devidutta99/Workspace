#include<stdio.h>
int main()
{
    int i,j,a,b,c,d;
    printf("Enter the values\n");
    scanf("%d %d",&a,&b);
    printf("\nThe binary value of a is:");
for (i=7;i>=0;i--)
{
    j=(a>>i) & 0x1;
    printf("%d",j);
}
printf("\nThe binary value of b is:");
for (i=7;i>=0;i--)
{
    j=(b>>i) & 0x1;
    printf("%d",j);
}
c=a&b;
printf("\nThe value of c is %d\n",c);
for (i=7;i>=0;i--)
{
    j=(c>>i) & 0x1;
    printf("%d",j);
}
d=a|b;
printf("\nThe value of d is %d\n",d);
for (i=7;i>=0;i--)
{
    j=(d>>i) & 0x1;
    printf("%d",j);
}
}