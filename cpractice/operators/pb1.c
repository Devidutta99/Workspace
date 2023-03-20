#include<stdio.h>
int main()
{
    int a[5],total=0;
    printf("the five numbers:\n");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i=0; i<5; i++){
        if((a[i]%2) !=0){
    total+=a[i];
    }
    }
    printf("sum of all the odd numbers:%d\n",total);
    
    return 0;
}