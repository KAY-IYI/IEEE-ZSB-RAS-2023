#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    int charIndex[256];
    memset(charIndex, -1, sizeof(charIndex));

    int start = 0;
    for (int end = 0; end < n; end++) {
        if (charIndex[s[end]] != -1) {
            start = (start > charIndex[s[end]] + 1) ? start : charIndex[s[end]] + 1;
        }
        charIndex[s[end]] = end;
        maxLength = (end - start + 1 > maxLength) ? (end - start + 1) : maxLength;
    }

    return maxLength;
}

// int main() {
//     char* s = "abcabcbb";
//     int length = lengthOfLongestSubstring(s);
//     printf("Length of Longest Substring: %d\n", length);

//     return 0;
// }
