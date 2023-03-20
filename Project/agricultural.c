#include<stdio.h>
float agricultural(float units){
    float bill;
if(units<=50 && units>=0)
	{
		bill=units*3.0;
		printf("Electricity Bill=%.2f Rupees",bill);
	}
	else if(units<=200 && units>50)
	{
		bill=50*3.00+(units-50)*4.80;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else if(units<=400 && units>200)
	{
		bill=50*3.00+150*4.80+(units-200)*5.80;
		printf("Electricity Bill=%.2f Rupees",bill);

	}

	else if(units>400)
	{
		bill=50*3.0+150*4.80+200*5.80+(units-400)*6.20;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return bill;
}