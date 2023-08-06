<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

#define add(x,y)  x+y
#define sub(x,y) x-y

int main(){
    int n1,n2;
    printf("enter your first number:");
    scanf("%d",&n1);

    printf("\nEnter your second number:");
    scanf("%d",&n2);

    #ifdef add
    printf("The result of addition : %d",add(n1,n2));

    #endif

    #ifdef sub
    printf("\nThe result of subtraction : %d",sub(n1,n2));

    #endif

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

#define add(x,y)  x+y
#define sub(x,y) x-y

int main(){
    int n1,n2;
    printf("enter your first number:");
    scanf("%d",&n1);

    printf("\nEnter your second number:");
    scanf("%d",&n2);

    #ifdef add
    printf("The result of addition : %d",add(n1,n2));

    #endif

    #ifdef sub
    printf("\nThe result of subtraction : %d",sub(n1,n2));

    #endif

    return 0;
}
>>>>>>> main
