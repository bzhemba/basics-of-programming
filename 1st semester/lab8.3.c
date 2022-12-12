include <stdio.h>
#include <stdlib.h>


int main() {
    int f = 0;
    char s[50];
    scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++){
        f += 1;
    }
    printf("%d", f);
    return 0;
}
