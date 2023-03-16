/*Create a struct named info that stores
name and age of a person then create an
object and a pointer of type info then
make the pointer pointing to the object
after that print the name and age stored in
the object BUT using the pointer.*/

#include <stdio.h>
#include <stdlib.h>

struct info
{
    char *name;
    int age;
};
int main(){

    struct info person_1 = {"Karam Yaseen_IYI",20};
    struct info *ptr = &person_1;

    printf("Name : %s \t Age : %d",ptr->name,ptr->age);

    return 0 ;
}

