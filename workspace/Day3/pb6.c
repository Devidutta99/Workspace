#include<stdio.h>
#include<math.h>
int main()
{
        int x1,x2,y1,y2;
        float d;
	x1=25;
	x2=35;
	y1=15;
	y2=10;
	d=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
                printf("distance between the two point is =%f\n",sqrt(d));

        return 0;
}

