//displaying the name
#include<stdio.h>
int main()
{
    int i,j,k;
    char first_name[10]={"SUNIT"};
    char second_name[10]={"PATEL"};
    char third_name[10]={"MAHARAJ"};
    char name[30];
    for(i=0;first_name[i]!='\0';i++)
    {
        name[i]=first_name[i];
        name[i]= ' ';
    }
    for(j=0;second_name[i]!='\0';j++)
    {
        name[i+j+1]=second_name[j];
        name[i+j+1]= ' ';
    }
    for(k=0;first_name[i]!='\0';k++)
    {
        name[k]=first_name[i+j+k+2];
        name[i+j+k+2]= ' ';
    }
    name[i+j+k+2]='\0';
    
    printf("\n\n");
    printf("%s\n",name);
    return 0;
}