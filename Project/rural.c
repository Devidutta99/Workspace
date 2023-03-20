#include<stdio.h>
float rural(float units){
    float bill;
if(units<=50 && units>=0)
	{
		bill=units*2.50;
		printf("Electricity Bill=%.2f Rupees",bill);
	}
	else if(units<=200 && units>50)
	{
		bill=50*2.50+(units-50)*4.85;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else if(units<=400 && units>200)
	{
		bill=50*2.50+150*4.85+(units-200)*5.50;
		printf("Electricity Bill=%.2f Rupees",bill);

	}

	else if(units>400)
	{
		bill=50*2.50+150*4.85+200*5.50+(units-400)*6.0;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return bill;
}