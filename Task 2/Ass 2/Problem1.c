<<<<<<< HEAD
/*
Write a C function to increment int value
and create a pointer to this function
then pass an int value to the function using the pointer only.
*/
#include <stdio.h>
#include <stdlib.h>

int increment_Fun(int* num)
{
   return *num += 1;
}

int main()
{
    int x = 10;
    int (*ptr)(int*) = increment_Fun;

    printf("Num before increment :-  %d\n", x);

    printf("value after increment  :-  %d\n", ptr(&x));






    return 0;
}
=======
/*
Write a C function to increment int value
and create a pointer to this function
then pass an int value to the function using the pointer only.
*/
#include <stdio.h>
#include <stdlib.h>

int increment_Fun(int* num)
{
   return *num += 1;
}

int main()
{
    int x = 10;
    int (*ptr)(int*) = increment_Fun;

    printf("Num before increment :-  %d\n", x);

    printf("value after increment  :-  %d\n", ptr(&x));






    return 0;
}
>>>>>>> main
