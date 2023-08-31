#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
    int len = strlen(s);
    int i = 0;
    
    for (; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return 0;
        }
    }

    return 1;
}
