#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter a no:");
    scanf("%d",&a);
    if(a>0){
    if(a%2==0)
{
    printf("%d it is a positive even no\n",a);
}
else
{
    printf("%d it is an positive odd no\n",a);
}
    }
       else if(a<0){
    if(abs(a)%2==0)
{
    printf("%d it is a negative even no\n",a);
}
else
{
    printf("%d it is an negative odd no\n",a);
}
    }

else{
    printf("the no ois zero");
}
return 0;
}