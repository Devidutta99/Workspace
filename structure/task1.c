#include<stdio.h>
#include<string.h>
struct emp
    {
        int empno;
        float salary;
        char ename;
        //double empno1;
        /* data */
    }employee;
int main()
{

    employee.empno=10;
    employee.salary=5400;
    //strcpy(employee.ename,"SDI");
    printf("%d\n",sizeof(struct emp));
    
}