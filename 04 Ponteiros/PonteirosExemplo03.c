#include <stdio.h>

/* Podemos usar as chamadas "constantes" que são valores que serão consultados/utilizados 
(sem ocorrência de sua modificação) durante a execução do programa */
#define TAM 5

// Como se trata da passagem de vetores como parâmetro, SEMPRE deve-se utilizar ponteiros
void leitura(int *pvet) {
	int i = 0;	
	while(i < TAM) {
		printf("Digite um número: ");
		scanf("%d", &pvet[i]); 
		i++;
	}
}

// Como se trata da passagem de vetores como parâmetro, SEMPRE deve-se utilizar ponteiros
void impressao(int *pvet) {
	int i = 0;
	printf("\nImprimindo na função impressao()\n");
	while(i < TAM) {
		// No caso de vetores, não precisamos do * para apresentar o valor, apenas a chamada do índice correto
		printf("[%d] ", pvet[i]);
		i++;
	}		
}

int main(void) {

	int i, vet[TAM];

	// Passagem de vetor como parâmetro para uma função de leitura
	leitura(vet);

	// Passagem de vetor como parâmetro para uma função de impressão
	impressao(vet);

	// realização da troca de um valor do vetor (índice 1)
	printf("\n\nTrocando o valor do índice 1 do vetor que atualmente é %d para 10.\n", vet[1]);
	vet[1] = 10;

	// Passagem de vetor como parâmetro para uma função de impressão
	impressao(vet);
	
}