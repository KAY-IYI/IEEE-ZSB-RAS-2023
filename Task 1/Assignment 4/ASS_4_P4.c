#include <stdlib.h>
#include<stdio.h>
int main()
{
    char arr1[100],arr2[100];
    printf(" Enter the String :-   ");
    gets(arr1);

    for(int i=0; arr1[i]!='\0';i++)
        arr2[i] = arr1[i];

    printf("\n string array after copying :-  %s \n", arr2);

    return 0;
}