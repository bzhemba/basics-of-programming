#include <stdio.h>
#include <stdlib.h>
struct Rectangle{
    int x1;
    int y1;
    int x2;
    int y2;
} rect;
void area(struct Rectangle){
    float ar = abs(rect.x1 - rect.x2) * abs(rect.y1 - rect.y2);
    printf("%f\n", ar);
}
void perimeter(struct Rectangle){
    float per = 2 * abs(rect.x1 - rect.x2) + 2 * abs(rect.y1 - rect.y2);
    printf("%f", per);

};
int main(){
    scanf("%d", &rect.x1);
    scanf("%d", &rect.x2);
    scanf("%d", &rect.y1);
    scanf("%d", &rect.y2);
    area(rect);
    perimeter(rect);
    return 0;
}
