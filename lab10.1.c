#include <stdio.h>
#include <stdlib.h>

int NOD(int a, int b){
    int c;
    while (a != b){
        if (a > b){
            c = abs(a - b);
            a = c;
        }
        else{
            c = abs(b - a);
            b = c;
        }
    }
    return a;
}

int NOK(int a, int b){
    return a*b / NOD(a, b);
}

int main(){
    int n;
    int m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("%d\n", NOD(n, m));
    printf("%d", NOK(n, m));
    return 0;
}
