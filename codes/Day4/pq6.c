#include<stdio.h>
int main()
{
        int days,years,months;
        days=2535;
        years=days/365;
        months=(days-(years*365))/30;
        days=days-((years*365)+(months*30));
        printf("Years:Months:Days %d %d %d",years,months,days);
 return 0;
}

