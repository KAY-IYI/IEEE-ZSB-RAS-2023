#include <stdio.h>

int main() {
    char ch;
    char string[100],sentence[100];

    scanf("%c", &ch);
    scanf("%s", string);
    scanf("\n");
    scanf("%[^\n]", sentence);

    printf("%c\n", ch);
    printf("%s\n", string);
    printf("%s\n", sentence);

    return 0;
}
