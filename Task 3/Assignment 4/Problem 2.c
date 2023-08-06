/*make the union a
struct instead then print the size of the
parent struct and compare with the size of
the previous union…Explain why the two
sizes are different*/

#include <stdio.h>
#include <stdlib.h>

struct database
{
    struct shops
    {
        char *name;
        char *location;
    };
    struct product_info
    {
        int id;
        float price;
        int quantity;
    };
    struct category
    {
        int id_categ;
        int products_num;
    };


};
int main(){
    union object;

    printf("Size of the parent struct  \t (database)    : %d\n",sizeof(struct database));
    printf("Size of the struct         \t (shops)       : %d\n",sizeof(struct shops));
    printf("Size of the struct         \t (product_info): %d\n",sizeof(struct product_info));
    printf("Size of the struct         \t (category)    : %d\n",sizeof(struct category));

    /* The total size of the structure is the sum of the size of every data member.
    The total size of the union is the size of the largest data member.*/

    return 0;
}
