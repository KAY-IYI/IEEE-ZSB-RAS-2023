<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int num = -1 ;
    printf("%u\n",num);
    if(num == 2147483649)
        printf("Sign & Magnitude");
    else if(num == 4294967294)
        printf("1’s Complement");
    if(num == 4294967295)
        printf("2’s Complement");

    return 0;
=======
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int num = -1 ;
    printf("%u\n",num);
    if(num == 2147483649)
        printf("Sign & Magnitude");
    else if(num == 4294967294)
        printf("1’s Complement");
    if(num == 4294967295)
        printf("2’s Complement");

    return 0;
>>>>>>> main
}