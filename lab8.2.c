#include <stdio.h>
#include <stdlib.h>


int main() {
    int f = 0;
    char* s1 = (char*)malloc(4 * sizeof(char));
    for (int i = 0; i < 4; i++) {
        scanf("%c", &s1[i]);
    }
    scanf(" ");
    char* s2 = (char*)malloc(4 * sizeof(char));
    for (int i = 0; i < 4; i++) {
        scanf("%c", &s2[i]);
    }
    for (int i = 0; i < 4; i++){
        if (s1[i] != s2[i]){
            f = 1;
        }
    }

    if (f == 0){
        printf("strings are equal");
    }
    else{
        printf("strings are not equal");
    }
    return 0;
}
