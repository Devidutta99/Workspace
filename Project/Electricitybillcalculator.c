#include<stdio.h>
#include"bill.h"
int main()
{
	float bill, units;
	int id,date,choose,money;
	char name,state,board;
	char username;
	int password;
	printf("USERNAME=\n");
	scanf("%s",&username);
	label:printf("PASSWORD=\n");
	scanf("%d",&password);

	if(password==12345678) {
		printf("Accessible\n");
	printf("Electricity Bill Calculator\n");
	printf("x----------------------------x\n");		
	printf("\nEnter the state:");
	scanf("%s",&state);
	printf("Enter the Electricity Board:");
	scanf("%s",&board);
	printf("Enter the consumer id:");
	scanf("%d",&id);
	printf("Enter the name:");
	scanf("%s",&name);
	printf("Date:");
	scanf("%d",&date);
	printf("Enter the units consumed:");
	scanf("%f",&units);
	printf("Choose your sector:\n 1-Agricultural \n 2-Commercial \n 3-Industrial \n 4-Municipal \n 5-Residential \n 6-Rural \n");
	scanf("%d",&choose);
	switch (choose)
	{
		case 1 :
				agricultural(units);
				break;
		case 2 :
				commercial(units);
				break;
		case 3 :
				industrial(units);
				break;
		case 4 :
				municipal(units);
				break;
		case 5 :
				residential(units);
				break;
		case 6 :
				rural(units);
				break;
	}
	printf("\n1-E-wallet \n 2- Cash" );
	scanf("%d",&money);
 switch (money)
 {
	case 1 :
				printf("you can pay through e-wallet.\n");
				break;
	case 2 :
				printf("our employee would contact you.\n");
				break;
 }
printf("Thank you\n");
printf("Have a nice day.");
}
	else{
	printf("Not Accessible\n");
	goto label;
	}
 }
