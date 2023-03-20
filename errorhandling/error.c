#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
int main(){
int fp;
fp=open("hello.txt", O_RDONLY);
if(fp==-1){
	exit(1);
	//printf("Error no is: %d\n",errno);
	//perror("Error MSG:");
	//printf("Error %s\n",strerror(errno));
}
}


