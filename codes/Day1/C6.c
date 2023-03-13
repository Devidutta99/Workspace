#include<stdio.h>
int main()
{
        int a=10, b=2,temp;
	printf("\n Before if statement \n a=%d\tb=%d\n",a,b);
        if(a>b)
        {
		a+=1;
		b+=1;
        }
        else
        {
                a+=10;
		b+=20;
        }
	printf("\n After if statement \n a=%d\tb=%d\n",a,b);
                      
      	return 0;
}
