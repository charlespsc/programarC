#include <stdio.h>

int main() {

    // Declarando a variável do tipo inteiro com o %d
    int num1;
    int num2;

    printf("Digite um número inteiro para num1: \n");
    scanf("%d", &num1);
    
    printf("Digite um número inteiro para num2: \n");
    scanf("%d", &num2);

    printf("A multiplicação de num1 * num2 é: %d\n", num1 * num2);

}