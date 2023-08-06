#include <stdlib.h>
#include<stdio.h>
int main()
{
    char arr1[100],arr2[100];
    printf("Enter the String :-   ");
    gets(arr1);

    printf("\nEnter the String :-   ");
    gets(arr2);

    for(int i=0; arr1[i]!='\0' || arr2[i]!='\0';i++){
        if (arr1[i]==arr2[i])
            continue;
        else{
            printf("Both are Not equal");
            return 0;
        }

    }
    printf("Both are equal");
    return 0;
}