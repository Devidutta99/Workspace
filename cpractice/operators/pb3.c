#include<stdio.h>
int main()
{
    int d;
    float c,f;
    printf("Input total distance:\n");
    scanf("%d",&d);
    printf("Input total fuel spent in litres:\n");
    scanf("%f",&f);
    c=d/f;
    printf("Average Consumption(Km/lt):%.2f\n",c);
    return 0;
}