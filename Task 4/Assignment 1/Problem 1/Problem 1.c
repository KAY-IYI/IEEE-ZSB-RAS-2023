#include <stdio.h>
#include <stdlib.h>

typedef struct student_info{
    unsigned int roll_number : 4;
    unsigned int age : 8;
    unsigned int mark : 3;
    char *name;
    char *address;
}s;

void Print_info(s Student[15]){
    printf("\nStudent information is :-\n");
    for(int i = 0; i<15 ;i++){
        printf("\nStudent %d Roll Number : %d \n",Student[i].roll_number,Student[i].roll_number);
        printf("Student %d Name : %s \n",Student[i].roll_number,Student[i].name);
        printf("Student %d Address : %s\n",Student[i].roll_number,Student[i].address);
        printf("Student %d Age : %d\n",Student[i].roll_number,Student[i].age);
        printf("Student %d Mark : %d\n",Student[i].roll_number,Student[i].mark);
        printf("\n");
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    }
}

int main(){

    s Student[15]={{1,19,20,"IYjI","Zifta"},{1,19,20,"IYI","Zifota"},{1,19,20,"IYI","Ziftba"},{1,19,20,"IYI","Ziffta"},{1,19,20,"IjYI","Zifta"}
    ,{1,19,20,"IYI","Zifzta"},{1,19,20,"IYI","Zgifta"},{1,19,20,"IYI","Ziifta"},{1,19,20,"sIYI","Zvifta"},{1,19,20,"IYI","Zipfta"}
    ,{1,19,20,"IYI","Zifbta"},{1,19,20,"IYI","fZifta"},{1,19,20,"IYI","Zifnta"},{1,19,20,"IYxI","Zcifta"},{1,19,20,"IYI","Zifkta"}};

    Print_info(Student);
    printf("Size of struct :%d bytes\n",sizeof(Student));

    return 0;
    /*
    Bit field only used with integr variables
    Array cannot use bit fields
    */

}
