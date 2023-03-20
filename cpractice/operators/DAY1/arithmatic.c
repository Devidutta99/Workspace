/* The program is for arithmatic operations
operators= '+','-','*','%','/'
syntax: operand operator operand-a+b */
#include<stdio.h>
int main()
{
int a,b;
printf("enter the values");
scanf("%d%d",&a,&b);
printf("Addition:a+b=%d\n",a+b);
printf("Subtraction :a-b=%d\n",a-b);
printf("Multiplication :a*b=%d\n",a*b);
printf("Division :a/b=%d\n",a/b);
printf("Modulus :ab=%d\n",a%b);
return 0;
}