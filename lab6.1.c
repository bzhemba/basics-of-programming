#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char arr[n];
    char *p;
    for (int i = 0; i < n; i++) {
        scanf("%s", &arr[i]);
    }

    p = arr;
    for (int i = 0; i < n; i++){
        printf("%d %c\n", i, *p);
        p++;
    }

    return 0;
}
