/*Create a union named database that
stores the following structures :
o shops of { name, location }
o product_info of { id , price ,quantity }
o category of { id ,products_num }
Then create an object of this union and
print the size of the union and each struct
inside it*/

#include <stdio.h>
#include <stdlib.h>

union database
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

int main()
{
    union object;
    printf("Size of the union  \t (database)    : %d\n",sizeof(union database));
    printf("Size of the struct \t (shops)       : %d\n",sizeof(struct shops));
    printf("Size of the struct \t (product_info): %d\n",sizeof(struct product_info));
    printf("Size of the struct \t (category)    : %d\n",sizeof(struct category));

    return 0;
}
