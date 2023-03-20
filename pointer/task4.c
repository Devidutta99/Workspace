#include<stdio.h>
int main()
{
    int i=0,min=0,arr[10];
    int numbers[]={4,5,7,8,9};
    min=minarry(numbers, 6);
    printf("minimum numbers is %d\n",min);
}
int minarry(int arr[],int size){
int min=arr[0];
int i=0;
for(i=1;i<size;i++)
{
    if(min>arr[i])
    {
        min=arr[i];
    }
}
return min;
}
