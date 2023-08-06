/*o Write a program to compare two dates
entered by user as strings. Make a
structure named Date to store the
elements day, month and year to store
the dates. If the dates are equal, display
"Dates are equal" otherwise display
"Dates are not equal".*/
#include <stdio.h>
#include <stdlib.h>

struct Data
{
    int day;
    int month;
    int year;
};

int main(){
    struct Data date_1;
    struct Data date_2;

    printf("Enter day of date 1 :");
    scanf("%d",&date_1.day);
    printf("Enter month of date 1 :");
    scanf("%d",&date_1.month);
    printf("Enter year of date 1 :");
    scanf("%d",&date_1.year);

    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    printf("Enter day of date 2 :");
    scanf("%d",&date_2.day);
    printf("Enter month of date 2 :");
    scanf("%d",&date_2.month);
    printf("Enter year of date 2 :");
    scanf("%d",&date_2.year);

    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("----------------------------------------\n");

    if (date_1.day == date_2.day && date_1.month == date_2.month && date_1.year == date_2.year)
        printf("Dates are equal\n");
    else
        printf("Dates are not equal\n");

    printf("----------------------------------------\n");
    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    return 0;
}
