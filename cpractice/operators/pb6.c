#include<stdio.h>
int main()
{
    int x,y;
    printf("\n Input the 1st number:");
    scanf("%d",&x);
    printf("\n Input the 2nd number:");
    scanf("%d",&y);
    if (x>y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
        }
        if((y%x)==0)
        {
            printf("\nMultiplied!");
        }
        else{
            printf("\n Not Multiplied");
        }
return 0;

}