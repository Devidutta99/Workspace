#include<stdio.h>
int main(){
    int mon=25,tue=28,wed;
    printf("Today's temp is:");
    scanf("%d",&wed);
    if (mon==wed){

        printf("%d",mon);

    }
     else if (tue==wed){

        printf("%d",tue);
        
    }
     else{

        printf("Unpredictable");
        
    }


}