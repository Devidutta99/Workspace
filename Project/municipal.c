#include<stdio.h>
float municipal(float units){
     float bill;
if(units<=50 && units>=0)
	{
		bill=units*3.50;
		printf("Electricity Bill=%.2f Rupees",bill);
	}
	else if(units<=100 && units>50)
	{
		bill=50*3.50+(units-50)*4;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else if(units<=250 && units>150)
	{
		bill=50*3.50+100*4+(units-150)*5.20;
		printf("Electricity Bill=%.2f Rupees",bill);

	}

	else if(units>250)
	{
		bill=50*3.50+100*4+100*5.20+(units-250)*6.50;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return bill;
}