#include<stdio.h>
int main()
{       
        int age;
	char gender;
	 printf("\n enter your gender :" );
	 gender=getchar();
	  printf("\n enter your age :" );
scanf("%d", &age);
        if(gender=='m'|| gender=='M')
		if(age>=13&&age<=19) 
                printf("\n You are in teens\n" );
            else
		    printf("\n You are not  in teens\n" );
             return 0;
}
