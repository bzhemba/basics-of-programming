#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.14;
    float alpha;
    float z1;
    float z2;
    scanf("%f", &alpha);
    z1 = 2*(pow(sin(3*pi-2*alpha), 2)) * (pow(cos(5*pi+2*alpha),2));
    z2 = 1.0/4.0 - 1.0/4.0 * sin(5.0/2.0*pi - 8* alpha);
    printf("%f\n", z1);
    printf("%f", z2);
    return 0;
}