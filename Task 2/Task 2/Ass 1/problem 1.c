/*
Write a C code that defines a three pointers p1,p2,p3 of types int,
char and long long then perform the following:
p1++ , p2 ++ ,p3++ on them.
Then print the reason for each output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x = 10;
    char y = 'K';
    long z = 100000000;

    int  *p1 = &x;
    char *p2 = &y;
    long *p3 = &z;

    printf("%p",p1);
    printf("\n%p",p2);
    printf("\n%p",p3);

    p1++;
    p2++;
    p3++;

    printf("\n%p",p1);
    printf("\n%p",p2);
    printf("\n%p",p3);

    return 0;
}
