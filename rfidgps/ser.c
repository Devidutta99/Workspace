#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
        int fd;
        char buf[20];
	off_t offset;
        fd=open("hello.txt",O_RDWR|O_CREAT|O_APPEND);
      
   
               write(fd,"Hello world",15);
               offset= lseek(fd,1,SEEK_CUR);
	       printf("current position  ",offset);
		read(fd,buf,20);
                printf("%s",buf);
                close(fd);

     
}
