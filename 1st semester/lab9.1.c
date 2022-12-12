#include <stdio.h>

int main() {
    char s1[20];
    gets(s1);
    int an = 0;
    int ap = 0;
    int as = 0;
    for (int i=0; s1[i]!='\0'; i++) {
        if (s1[i] >= '1' && s1[i] <= '9'){
            an += 1;
        }
        else if (s1[i] >= 'a' && s1[i] <= 'z') {
            as += 1;
        } else if (s1[i] >= 'A' && s1[i] <= 'Z') {
            ap += 1;
        }
    }
    printf("number of digits: %d\nnumber of lowercase letters: %d\nnumber of uppercase letters: %d", an, as, ap);
    return 0;
}
