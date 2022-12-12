#include <stdio.h>
#include <math.h>

float trigz1(float alpha)
    {
    float z1;
    z1 = 2*(pow(sin(3*M_PI-2*alpha), 2)) * (pow(cos(5*M_PI+2*alpha),2)); //т.к в формуле есть синусы в квадрате, воспользуемся функцией pow() внутри библиотеки math
    return z1;
    }
    
float trigz2(float alpha)
    {
    float z2;
    z2 =  1.0/4.0 - 1.0/4.0 * sin(5.0/2.0*M_PI - 8* alpha); //т.к. в формуле есть дроби, нужно получить их значение с плавающей точкой, для этого укажем все целые числа с долями
    return z2;
    }

int main() {
    float a;
    scanf("%f", &a);
    printf("%f\n", trigz1(a));
    printf("%f", trigz2(a));
    return 0;
}
