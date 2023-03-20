#include<stdio.h>
int main(int argc,char*argv[])
{
 int i,n, sum=0,count=0;
 for(i=1;i<argc;i++)
 {
    sscanf(argv[i],"%d",&n);
    sum+=n;
 }
 printf("%d",sum);
 printf("\n%s",argv[0]);
 printf("\n%d",argc);
 for(i=1;i<argv;i++)
 {
    count++;
 }
 printf("\n%d",count);  
}