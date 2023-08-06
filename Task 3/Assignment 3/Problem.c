/*o Create a struct named test that stores
the following in the same order:
o Int id
o String name
o Char class_id
Now print the size of the struct in this
case the change the order of definition
of the string to be the first then print the
size again.*/

#include <stdio.h>
#include <stdlib.h>

struct test
{
    int id;
    char *name;
    char class_id;
};
struct test_1
{
    char *name;
    int Id;
    char class_id;
};
int main(){
    printf("Size of the struct before changing the order : %d\n" ,sizeof(struct test));
    printf("Size of the struct after  changing the order:  %d\n" ,sizeof(struct test_1));

    /* Yes As Computer stores structure using the concept of word boundary.Processor  read( one Word ) at a time from memory not reads 1 byte at a time.
    So the size of the word is 8 bytes so in the first case CPU will take 3 cylcles to read the size [3*8 = 24 bytes]
    and in the second case CPU will take only 2 cycles [2*8 =16 bytes] */

    return 0;

}
