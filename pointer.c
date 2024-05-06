#include <stdio.h>

int main()
{
	// Declaração da variável e ponteiro
	int ano, *pAno;

	// Inicialização
	ano = 2024;
	pAno = &ano;

	printf("O valor de '*pAno' é: ");
	printf("%d\n", *pAno);

	printf("O valor de '*&ano' é: ");
	printf("%d\n", *&ano);

	printf("Endereço de 'ano' é: ");
	printf("%u\n", &ano);

	printf("Endereço de 'pAno' é: ");
	printf("%u\n", pAno);

	printf("Endereço de '&pAno' é: ");
	printf("%u\n", &pAno); // Endereço de 'pAno' <> 'ano'

	return 0;

}

