#include<stdio.h>
#include<Application.h>
int main()
{
	int a,b;
	printf("Enter the values\n");
	scanf("%d %d",&a,&b);
	printf("addition %d\n",add(a,b));
	printf("subtraction %d\n",sub(a,b));
	printf("multiplication %d\n",mul(a,b));
	printf("division %d\n",div(a,b));
	printf("modulus %d\n",mod(a,b));
	printf("hello world");
	getchar();
}
