//function pointer
#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int (*func)(int,int);

int main()
{
    char operation;
    printf("enter the operation you want to perform\n");
    scanf("%c",&operation);
    int result;
    switch (operation)
    {
        case '+':
        func=&add;
        result=(*func)(10,20);
        printf("addition =%d\n",result);
        break;
        case '-':
        func=&sub;
        result=(*func)(20,10);
        printf("subtraction=%d\n",result);
        break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}


