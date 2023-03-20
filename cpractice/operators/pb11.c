#include<stdio.h>
int main()
{
    int x,y;
    printf("\n Input the 1st number:");
    scanf("%d",&x);
    printf("\n Input the 2nd number:");
    scanf("%d",&y);
    if (y>x)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
       printf("\nQuotient%d",x/y);
       printf("\n Reminder%d",x%y);
return 0;

}