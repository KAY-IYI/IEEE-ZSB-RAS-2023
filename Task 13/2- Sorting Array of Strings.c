#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b)>0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(a, b)<=0;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count1 = 0, count2 = 0;
    int presence1[256] = {0}, presence2[256] = {0};
    int n1 = strlen(a);
    int n2 = strlen(b);

    const char* ptr1 = a;
    const char* ptr2 = b;

    while (*ptr1) {
        presence1[*ptr1 - 'a'] = 1;
        ptr1++;
    }

    while (*ptr2) {
        presence2[*ptr2 - 'a'] = 1;
        ptr2++;
    }

    for (int i = 0; i < 256; i++) {
        if (presence1[i])
            count1++;
        if (presence2[i])
            count2++;
    }

    if (count1 == count2)
        return strcmp(a, b) > 0;
    else
        return count1 > count2;
}


int sort_by_length(const char* a, const char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);

    if (lenA == lenB)
        return lexicographic_sort(a, b);
    else
        return lenA - lenB;
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
