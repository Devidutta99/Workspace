#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter the value\n");
    scanf("%d",&a);
    printf("the binary value is\n");
for (i=7;i>=0;i--)
{
    j=(a>>i) & 0x1;
    printf("%d",j);
}
{
    j=(a>>3) | 0;{
    if(j==1){
        printf("\nStatus of 3rd bit is on.\n",i);

    }
    else{
        printf("\nStatus of 3rd bit is off.\n",i);

    }
}
}
}