/*Create a struct named student_info
which stores the roll number, name, age,
address and marks of 15 students then
write a program that prints all the info
related to each of the 15 student*/

#include <stdio.h>
#include <stdlib.h>

struct Student_Data
{
    char name[30];
    char address[20];
    int age;
    int roll_number;
    float mark;
};

int main(){
    struct Student_Data Student[15];
    for(int i=0; i<15;i ++){

    printf("Enter Student roll_number : ");
    scanf("%d",&Student[i].roll_number);

    printf("Enter %d Student Name : ",Student[i].roll_number);
    getchar();
    gets(Student[i].name );

    printf("Enter %d Student Address : ",Student[i].roll_number);
    getchar();
    gets(Student[i].address);

    printf("Enter %d Student Age : ",Student[i].roll_number);
    scanf("%d",&Student[i].age);

    printf("Enter %d Student Mark : ",Student[i].roll_number);
    scanf("%f",&Student[i].mark);

    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    printf("\n");
    }
    printf("\nStudent information is :-\n");
    for(int i = 0; i<15 ;i++){
        printf("Student %d Roll Number : %d \n",Student[i].roll_number,Student[i].roll_number);
        printf("Student %d Name : %s \n",Student[i].roll_number,Student[i].name);
        printf("Student %d Address : %s\n",Student[i].roll_number,Student[i].address);
        printf("Student %d Age : %d\n",Student[i].roll_number,Student[i].age);
        printf("Student %d Mark : %0.1f\n",Student[i].roll_number,Student[i].mark);
        printf("\n");
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
    }

    return 0;
}
