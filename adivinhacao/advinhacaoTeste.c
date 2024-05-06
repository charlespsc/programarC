#include <stdio.h>

int main() {

    int a = 3;
    int b = 2;

    double pontos = a / (double)b; // a conversão casting
    printf("%f\n", pontos);

    double pi = 3.1415;
    int piConvertido = (int)pi; // a conversão casting

    printf("%f %d\n", pi, piConvertido);
}