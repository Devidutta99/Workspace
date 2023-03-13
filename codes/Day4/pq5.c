#include<stdio.h>
int main()
{
        int i1,i2;
	float w1,w2,v;
        printf("\n weight1-item1:");
        scanf("%f",&w1);
	 printf("\n no of item1:");
        scanf("%d",&i1);
	 printf("\n weight-item2:");
        scanf("%f",&w2);
	printf("\n no of item2:");
        scanf("%d",&i2);
	v=((w1*i1)+(w2*i2))/(i1+i2);
         printf("Average value=:%f\n",v);
 return 0;
}
