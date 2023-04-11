/* Implement your own sizeof() function
one time with macros and the other with
inline keyword then mention the
difference between them and the regular
declaration and what is the best use
case for each one of them*/

#include <stdio.h>
#include <stdlib.h>

#define Own_Sizeof1(type)(char*)(&type+1)-(char*)(&type)

static inline int Own_Sizeof2( type)
{
    return (char*)(&type+1)-(char*)(&type);
}
int main()
{
    int x;
    printf("the size of int by macros is\t %d byte  And by inline function is\t %d \n",Own_Sizeof1(x),Own_Sizeof2(x));

    return 0;
}
/*
(macro) preprocessor directive that replaces a particular expression
        with a code segment during the preprocessing stage

        defined using #define directive

        used to perform simple text replacement or to define const

(inline) a keyword that requests the compiler to replace the fun call
         statement with the corresponding fun code during compilation stage

        defined by the inline keyword

        used to reduce the fun call overhead & improve performance
        by avioding stack frame creation & destruction


macro is faster than inline AS substituted during the preprocessing stage itself

code of macro is not type checked so can lead to unexpected behavior
 if not used carefully , but inline is type checked

macro used in competitive programming but inline not






*/
