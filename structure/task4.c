#include<stdio.h>
#include<string.h>
struct  employee
{
    int empno;
    float sal;
    char ename[10];
}employee;
struct employee emp1={10,50000,"alex"};
int main()
{
    printf("%d %s %f",emp1.empno,emp1.ename,emp1.sal);
}