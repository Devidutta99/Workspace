#include<stdio.h>
float residential(float units){
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
		bill=50*2.50+150*4.85+(units-200)*5.85;
		printf("Electricity Bill=%.2f Rupees",bill);

	}

	else if(units>400)
	{
		bill=50*3.50+150*4+200*5.20+(units-400)*6.30;
		printf("Electricity Bill=%.2f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return bill;
}