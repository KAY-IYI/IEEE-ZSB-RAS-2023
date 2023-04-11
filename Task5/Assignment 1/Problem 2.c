/*Edit the previous program and instead of reallocating one of
the memory spaces just free it and allocate a fourth space
with a relatively bigger space then comment what this would
do if you had a limited memory space.*/
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


    free(ptr1);

    int *ptr3 = (int*) malloc(9*sizeof(int));
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
// if we had limited memory space that lead to Stake in Mommery
