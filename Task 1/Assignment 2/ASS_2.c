#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x =1 , y=2 , z=3;
    int *p=&x,*q=&y,*r=&z,*temp1,*temp2;
    printf(" x=%d\t\t",x);
    printf("y=%d\t\t",y);
    printf("z=%d\t\t",z);
    printf("\n p=%d\t\t",p);
    printf("q=%d\t\t",q);
    printf("r=%d\t\t",r);
    printf("\n *p=%d\t\t",*p);
    printf("*q=%d\t\t",*q);
    printf("*r=%d\t\t",*r);
    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Swapping Pointers");
    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    temp1 = p;
    temp2 = r;
    p = q;
    q = temp2;
    r = temp1;
    printf(" x=%d\t\t",x);
    printf("y=%d\t\t",y);
    printf("z=%d\t\t",z);
    printf("\n p=%d\t\t",p);
    printf("q=%d\t\t",q);
    printf("r=%d\t\t",r);
    printf("\n *p=%d\t\t",*p);
    printf("*q=%d\t\t",*q);
    printf("*r=%d\t\t",*r);

    return 0;
}
