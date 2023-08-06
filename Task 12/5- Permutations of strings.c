#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char** s) {
    // to get largest index i such that s[i] < s[i+1]
    int iterator;
    for (iterator = n - 2; iterator >= 0; iterator--) {
        if (strcmp(s[iterator], s[iterator + 1]) < 0) {
            break;
        }
    }

    if (iterator < 0) {
        return 0;
    }

    int iterator2;
    for (iterator2 = n - 1; iterator2 > iterator; iterator2--) {
        if (strcmp(s[iterator], s[iterator2]) < 0) {
            break;
        }
    }

    // Swap s[i] and s[j]
    char* temp = s[iterator];
    s[iterator] = s[iterator2];
    s[iterator2] = temp;

    // Reverse
    for (int iterator3 = iterator + 1, l = n - 1; iterator3 < l; iterator3++, l--) {
        temp = s[iterator3];
        s[iterator3] = s[l];
        s[l] = temp;
    }

    return 1;
}



int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}