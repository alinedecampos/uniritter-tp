#include <stdio.h>

/* Crie um algoritmo que tenha uma função que recebe um número X
e retorne ao programa principal o somatório dos X primeiros 
números inteiros. Apresente o valor retornado pela função. */

int somatorio(int num) { 

	int i = 0, soma = 0;

	while(i <= num) {
		soma = soma + i;
		i++;
	}

	return soma;
}


void Exercicio07() {

	int num, resultado;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	resultado = somatorio(num);
	printf("Resultado da somatória: %d", resultado);

}