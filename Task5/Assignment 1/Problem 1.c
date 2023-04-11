/*Create a C program that contains 3 different allocated
memory spaces using (malloc, calloc) and reallocate one of
them to a different space using(realloc) for each allocation
indicate if it was allocated successfully or not and then
comment and print the values that was assigned to these
memory blocks. ”Don’t forget to free your memory when you
finish ☺”*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
                   // Malloc Function

    int *ptr1 = (int*) malloc(5* sizeof(int));
    if (ptr1==NULL){
        printf("Failed to Allocate");
    }else{
        for (int i = 0; i<5;i++ )
            ptr1[i]=i;
        printf("Values of Malloc ptr1 is \t");
        for (int i = 0; i<5;i++ )
            printf("%d\t",ptr1[i]);
        }

                     // Calloc Function

    int *ptr2 = (int*) calloc(5, sizeof(int));
    if (ptr2==NULL){
        printf("Failed to Allocate");
    }else{
        for (int i = 0; i<5;i++ )
            ptr2[i]=i+5;
        printf("\nValues of calloc ptr2 is \t");
        for (int i = 0; i<5;i++ )
            printf("%d\t",ptr2[i]);
        }

                  // realloc Function


    int *ptr3 = (int*) realloc(ptr2,9*sizeof(int));
    if (ptr3==NULL){
        printf("Failed to Allocate");
    }else{
        for (int i = 0; i<9;i++ )
            ptr2[i]=i+10;
        printf("\nValues of realloc ptr3 is \t");
        for (int i = 0; i<9;i++ )
            printf("%d\t",ptr2[i]);
        }

    free(ptr2);
    free(ptr3);

    return 0;
}
