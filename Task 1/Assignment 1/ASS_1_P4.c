#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=1,y=5,z=9;
    int *numx,*numy,*numz;
    numx=&x;
    numy=&y;
    numz=&z;
    printf("Enter 3 Number :");
    scanf("%d%d%d",numx,numy,numz);
    printf("%d",*numx+*numy+*numz);

    return 0;
}