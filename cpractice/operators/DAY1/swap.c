/* program for swapping two numbers without using 3rd variable*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values");
    scanf("%d%d",&a,&b);
        printf("Before Swap a=%d b=%d\n",a, b);
        a=a^b;
        b=a^b;
        a=a^b;
        
    printf("After Swap a=%d b=%d\n",a, b);
    return 0;
}
