#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[10000];
    scanf("%[^\n]", s);

    int count[10] = {0}; /* store the frequency of digits */

    for (int iterator = 0; iterator < strlen(s); iterator++) {
        char ch = s[iterator];

        // check the character is digit
        if (isdigit(ch)) {
            int digit = ch - '0';
            count[digit]++;
        }
    }

    // print frequency of digits
    for (int iterator = 0; iterator < 10; iterator++) {
        printf("%d ", count[iterator]);
    }

    return 0;
}
