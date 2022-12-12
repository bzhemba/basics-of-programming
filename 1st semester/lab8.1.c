#include <stdio.h>
#include <stdlib.h>


char* cpy(char *st1, char *st2) {
    char *new = (char *) realloc(st1, sizeof(*st1) + sizeof(*st2));
    if (new != st1) {
        for (int i = 0; i < (sizeof(*st1) / sizeof(char)); i++) {
            new[i] = st1[i];
        }
        for (int i = (sizeof(*st1)/ sizeof(char)); i < ((sizeof(*st1) + sizeof(*st2)) / sizeof(char)); i++) {
            new[i] = st2[i];
        }
    } else {
        for (int i = (sizeof(*st2) / sizeof(char)); i < ((sizeof(*st1) + sizeof(*st2)) / sizeof(char)); i++) {
            new[i] = st2[i];
        }
    }
    return new;
};

int main() {
    char* s1 = (char*)malloc(4 * sizeof(char));
    for (int i = 0; i < 4; i++) {
        s1[i] = 'a';
    }
    char* s2 = (char*)malloc(3 * sizeof(char));
    for (int i = 0; i < 3; i++) {
        s2[i] = 'b';
    }
    printf("%s", cpy(s1, s2));
    return 0;
}
