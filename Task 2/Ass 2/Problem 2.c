/*Create an array of int values
and a pointer pointing to this array then print all the
elements of the array using this pointer.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 };
    int *p = arr;
    printf("Array elements:\n");

    for (int i = 0; i <  ( sizeof(arr) / sizeof(arr[0])  ) ; i++)
        printf("%d\t", *(p + i));

    return 0;
}
