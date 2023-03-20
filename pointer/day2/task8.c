#include <stdio.h>
#include <stdarg.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int sum = 0, n,product;
    if (strcmp(argv[1], "-s" )== 0)
    {
        int result=0;
        for(int i=0;i<argc;i++)
        scanf(argv[2],"%d",&n);
        sum+=n;
        printf("%d",sum);
    }

        else if(strcmp(argv[1],"-p")==0)
        {
            product+=n;
        }
        else{
            printf("invalid argument");
            }
}