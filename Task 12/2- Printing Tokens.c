#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    // Token the string
    char *input = strtok(s, " ");

    // Print token
    while (input != NULL) {
        printf("%s\n", input);
        input = strtok(NULL, " ");
    }

    free(s); // to free the allocated memory
    return 0;
}
