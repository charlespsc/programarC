#include <stdio.h>

int main() {

    // Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) 
    // e imprima o resultado da multiplicação entre essas duas variáveis.
    printf("*****************\n");
    printf("* Multiplicação *\n");
    printf("*****************\n");

    int x;
    int y;
    // Declarando a variável do tipo inteiro com o %d
    // printf("O numero %d é o secreto. Não conta para ninguém!\n", numeroSecreto);

    printf("Digite um número inteiro para X: ");
    // scanf("%d", &x);
    printf("Digite um número inteiro para Y: ");
    scanf("%d", &y);
    printf("A multiplicação de x * y é: %d\n", x * y);

}