//size of all datatypes using pointer
#include<stdio.h>
int main()
{
    int *p;
    float *m;
    char c='t';
    char *ptr=&c;
    char **e;
    double *pq;
    printf("sizeof int %d\n",sizeof(*p));
    printf("sizeof float %d\n",sizeof(*m));
    printf("sizeof char %d\n",sizeof(ptr));
    printf("sizeof char %d\n",sizeof(**e));//even we put dpoble pointer we will get same 1 char
    printf("sizeof double %d\n",sizeof(*pq));
}