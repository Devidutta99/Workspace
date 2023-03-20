#include<stdio.h>
float industrial(float units){
    float bill;
if(units<=200 && units>=0)
	{
		bill=units*5.95;
		printf("Electricity Bill=%.2f Rupees",bill);
	}
	else if(units<=400 && units>200)
	{
		bill=200*5.95+(units-200)*6.95;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else if(units>400)
	{
		bill=200*5.95+200*6.95+(units-400)*7.15;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return bill;
}