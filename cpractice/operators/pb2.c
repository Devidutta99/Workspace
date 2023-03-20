#include<stdio.h>
int main()
{
    char id[10];
    int h;
    double v,s;
    printf("Input Employee Id:\n");
    scanf("%s",&id);
     printf("Input working hours:\n");
    scanf("%d",&h);
     printf("Salary amount/hr:\n");
    scanf("%lf",&v);
    s=v*h;
     printf("Input Employee Id:%s\nSalary=U$%lf\n",id,s);
    0342 return 0;
}