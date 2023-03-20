#include<stdio.h>
int main()
{
    int x,y;
    float d;
    printf("input two numbers:\n");
    printf("\nx:");
    scanf("%d",&x);
    printf("\ny:");
    scanf("%d",&y);
    if(y!=0)
    {
        d=x/y;
        printf("%.1f\n",d);
    }
    else{
        printf("Division is not possible.\n");

    }
    return 0;
    }
