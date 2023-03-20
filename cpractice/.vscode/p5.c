#include<stdio.h>
int main()
{ 
int a;
printf("Enter a number:",a);
scanf("%d",&a);
if(a>0){
     printf("%d is Positive.",a);
     }
      else if (a<0){
        printf("%d is negative.",a);
      }
else {
        printf("%d is zero.",a);
}
 return 0;
 }