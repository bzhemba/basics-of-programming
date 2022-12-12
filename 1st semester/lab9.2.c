#include <stdio.h>

int main() {
    int duration;
    int value;
    int cost;
    scanf("%d", &duration);
    scanf("%d", &value);
    scanf("%d", &cost);
    if (duration <= 499){
        printf("%d", value);
    }
    else{
        int sum = value + (duration-499)*cost;
        printf("%d", sum);
    }
    return 0;
