#include <stdio.h>
#include <string.h>
/*1.	Write a C program to maintain a record of “n” student details
 using an array of structures with four fields (Roll number, Name, Marks, and Grade).
Assume appropriate data type for each field. Print the marks of the student,
given the student name as input.*/


struct student
{
    int roll_number;
    float marks;
    char name[20];
};
int search(struct student s[],int n);
int read(struct student s[],int n);
void main()
{
    int n;
    printf("Enter how many records you want to store : ");
    scanf("%d",&n);
    struct student s[n];
    read(s,n);
    search(s,n);
}
int read(struct student s[],int n)
{
    int i;
    printf("Enter name, roll no. and marks Below :\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d record :\n",i+1);
        printf("Enter Student name : ");
        scanf("%s",s[i].name);
        printf("Enter roll number of the student : ");
        scanf("%d",&s[i].roll_number);
        printf("Enter student marks : ");
        scanf("%f",&s[i].marks);

    }
}
int search(struct student s[],int n)
{
    printf("\nEnter student name to search his marks : ");
    char c[20];
    scanf("%s",c);
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(s[i].name,c)==0)
        {
            printf("student name %s, his roll number %d and his marks %.2f",s[i].name,s[i].roll_number,s[i].marks);
        }


    }

}
