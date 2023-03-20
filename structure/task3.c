#include<stdio.h>
#include<string.h>
struct  employee
{
    int empno;
    float sal;
    char ename[10];
}employee;
struct employee emp1,emp2,emp3;
int main()
{
    emp1.empno=10;
    strcpy(emp1.ename,"alex");
    emp1.sal=50000;
    printf("%d %s %f",emp1.empno,emp1.ename,emp1.sal);
}