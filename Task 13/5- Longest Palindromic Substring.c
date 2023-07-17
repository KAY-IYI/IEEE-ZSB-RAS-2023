#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {
    int len = strlen(s);
    if (len < 2)
        return s;

    int start = 0;
    int max_len = 1;

    for (int i = 0; i < len; i++) {

        int left = i - 1;
        int right = i + 1;
        while (left >= 0 && right < len && s[left] == s[right]) {
            left--;
            right++;
        }
        int len1 = right - left - 1;

        left = i;
        right = i + 1;
        while (left >= 0 && right < len && s[left] == s[right]) {
            left--;
            right++;
        }
        int len2 = right - left - 1;

        int curr_len = len1 > len2 ? len1 : len2;
        if (curr_len > max_len) {
            start = i - (curr_len - 1) / 2;
            max_len = curr_len;
        }
    }

    char* result = (char*)malloc((max_len + 1) * sizeof(char));
    if (result == NULL) {
        printf("Memory allocate failed.\n");
        return NULL;
    }

    strncpy(result, s + start, max_len);
    result[max_len] = '\0';

    return result;
}
// int main() {
//     char s[] = "KARAM";
//     char* longest_palindrome = longestPalindrome(s);

//     if (longest_palindrome != NULL) {
//         printf("%s\n", longest_palindrome);  // Output: "bab"
//         free(longest_palindrome);
//     }

//     return 0;
// }
