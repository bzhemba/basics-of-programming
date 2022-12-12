#include <stdio.h>
#include <stdlib.h>
struct Rectangle{
    int a;
    int b;
    int s;
};

int rectangle_area(struct Rectangle* p){
    return p->a * p->b;
};

int main() {
    struct Rectangle n = {10, 20};
    n.s =  rectangle_area(&n);

    printf("%d", n);
    return 0;
}
