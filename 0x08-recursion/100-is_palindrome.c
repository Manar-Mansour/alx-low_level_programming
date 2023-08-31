#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
    int len = strlen(s);
    
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return 0;  // If characters don't match, not a palindrome
        }
    }

    return 1;  // If all characters matched, it's a palindrome
}
