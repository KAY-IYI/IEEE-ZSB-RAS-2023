#include <stdbool.h>

bool isNumber(char* s) {
    bool numberSeen = false;
    bool decimalSeen = false;
    bool exponentSeen = false;
    bool numberAfterExponent = true;

    while (*s == ' ') {
        s++;
    }

    if (*s == '+' || *s == '-') {
        s++;
    }

    while (*s != '\0') {
        if (*s >= '0' && *s <= '9') {
            numberSeen = true;
            numberAfterExponent = true;
        } else if (*s == '.') {
            if (decimalSeen || exponentSeen) {
                return false;
            }
            decimalSeen = true;
        } else if (*s == 'e' || *s == 'E') {
            if (exponentSeen || !numberSeen) {
                return false;
            }
            exponentSeen = true;
            numberAfterExponent = false;
        } else if (*s == '+' || *s == '-') {
            if (*(s - 1) != 'e' && *(s - 1) != 'E') {
                return false;
            }
        } else if (*s == ' ') {
            break;
        } else {
            return false;
        }

        s++;
    }

    while (*s == ' ') {
        s++;
    }

    return numberSeen && numberAfterExponent && *s == '\0';
}
