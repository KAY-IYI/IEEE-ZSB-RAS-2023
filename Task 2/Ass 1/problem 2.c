<<<<<<< HEAD
/*
Write a C code that defines a pointer “ptr”
that points to an integer variable containing HEX value of 3 bytes
then perform the following operations: *ptr++, *++ptr, ++*ptr
and print the reason for each output.
*/

#include<stdio.h>
#include <stdlib.h>

int main(){

    int x = 0x123ABC;
    int * ptr = &x;

    printf("%p\n",ptr);
    printf("%d\n",*ptr++);
    printf("%d\n",*++ptr);
    printf("%d\n",++*ptr);

    return 0;
}
=======
/*
Write a C code that defines a pointer “ptr”
that points to an integer variable containing HEX value of 3 bytes
then perform the following operations: *ptr++, *++ptr, ++*ptr
and print the reason for each output.
*/

#include<stdio.h>
#include <stdlib.h>

int main(){

    int x = 0x123ABC;
    int * ptr = &x;

    printf("%p\n",ptr);
    printf("%d\n",*ptr++);
    printf("%d\n",*++ptr);
    printf("%d\n",++*ptr);

    return 0;
}
>>>>>>> main
