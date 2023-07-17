#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* multiply(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int lenResult = len1 + len2;

    char* result = (char*)malloc((lenResult + 1) * sizeof(char));
    memset(result, '0', lenResult * sizeof(char));
    result[lenResult] = '\0';

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = (result[i + j + 1] - '0') + (digit1 * digit2);

            result[i + j + 1] = (product % 10) + '0';
            result[i + j] += product / 10;
        }
    }

    int i = 0;
    while (result[i] == '0' && result[i + 1] != '\0') {
        i++;
    }

    memmove(result, result + i, (lenResult - i + 1) * sizeof(char));

    return result;
}

// int main() {
//     char* num1 = "123";
//     char* num2 = "456";

//     char* product = multiply(num1, num2);
//     printf("Product: %s\n", product);

//     free(product);
//     return 0;
// }
