#include <stdio.h>//defining the library
struct student//declaring the structure
{
    char name[50];
    int roll;
    float marks;
struct details//nested structure
{
    int reg_no;
}details;
}student;
int main()
{
    int i,n;//declaring a varible in the inside the main function
    struct student s1;
    struct details d;
    printf("Enter total of students:");
    scanf("%d",&n);
    //accepting the numbers of student roll number marks
    for(i=0;i<n;i++){
        printf("\n Enter information of student :\n");
        printf("Enter name: ");
        scanf("%s", s1.name);
        printf("Enter roll number: ");
        scanf("%d", &s1.roll);
        printf("Enter marks: ");
        scanf("%f", &s1.marks);
        printf("enter the details");
        scanf("%d",&s1.details.reg_no);
    }
    //displaying the student details
    printf("Displaying Information:\n");
    for(i=0;i<n;i++)
    {
        
        printf("\t registration no:%d",s1.details.reg_no);
        printf("\t Name:%s\n ",s1.name);
        printf("\t Roll number: %d\n",s1.roll);
        printf("\t Marks: %.1f\n\n",s1.marks);
    }

    return 0;
}