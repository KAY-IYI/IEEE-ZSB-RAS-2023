/*
Write C program that defines the difference between various C storage classes :
{ auto, extern, static, register} in terms of :
Scope, initial value, and lifetime
access.
*/

#include <stdio.h>
#include <stdlib.h>
#include "TESt.c"

extern void Test() ;

int main(){

    Test();

    auto int A=5;
    printf("A = %d \n", A);

    //register int B = 5;
    //printf("%p",&B);
    //  Error because thats a register variable which stored
    //in CPU not in memory and we cant access his address

    Test_2();
    Test_2();

    return 0;

}

void Test_2(void)
{
   static int y = 10; // local static variable
   y++;
   printf("y = %d \n", y);
}

