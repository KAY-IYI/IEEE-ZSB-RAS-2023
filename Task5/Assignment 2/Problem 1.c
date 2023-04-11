/*Create a C program that stores an input time of
format [hh:mm:ss] into a single integer variable
then prints the time again out of that variable.
Note: you should solve it without any string
manipulation.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours , minutes , sec , time;
    printf("Enter the time of format [hh:mm:ss]\t");
    scanf("%d:%d:%d",&hours , &minutes , &sec);
    time = hours*3600+minutes*60+sec;
    printf("the time is  %d : %d : %d",time/3600, time%3600 /60 ,time % 60 );
    return 0;
}
