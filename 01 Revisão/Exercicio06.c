#include <stdio.h>
#include <string.h>

/* Crie um algoritmo que deve ter uma função que receba como parâmetro 
uma frase e um número inteiro, esta função deve escrever a frase na 
tela repetidamente o número de vezes que foi passado como parâmetro. */

void repeticao (char f[20], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d %s\n", i, f);
	}
}

void Exercicio06() {

	char frase[20];
	int num;
		
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	printf("Digite a quantidade de vezes a ser repetida: ");
	scanf("%d", &num);
	
	// chamada da função passando parâmetros
	repeticao(frase, num);
}
