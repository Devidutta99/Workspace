#include<stdio.h>
int main()
{
        char grade='B';
	switch(grade)
	{
		case 'A':
         printf("Execellent\n" );
	 break;
		case 'B':
		case'C':
	 printf("well done\n" );
	 break;
	         case 'D':
         printf("You are Passed\n" );
         break;
	         case 'F':
         printf("Better Try again\n" );
         break;
		 default:
         printf("Invalid Grade\n" );
	}
                    printf("Your grade is %c\n",grade );
             return 0;
}

