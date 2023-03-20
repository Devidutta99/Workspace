#include<stdio.h>
float commercial(float units){
     float bill;
if(units<=200 && units>=0)
	{
		bill=units*5.75;
		printf("Electricity Bill=%.2f Rupees",bill);
	}
	else if(units<=400 && units>200)
	{
		bill=200*5.75+(units-200)*6.70;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else if(units>400)
	{
		bill=200*5.75+200*6.70+(units-400)*7.0;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return bill;
}