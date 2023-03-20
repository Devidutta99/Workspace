#include<stdio.h>
int main()
{
    int i,j,a,c=0;
    printf("Enter the value\n");
    scanf("%d",&a);
    printf("the binary value is\n");
for (i=7;i>=0;i--)
{
    j=(a>>i) & 0x1;
    printf("%d",j);
    if(j==1){
        c++;
    }
    }
    printf("\n The number of 1 in binary is: %d",c);
}