#include <stdio.h>

/*  Crie um algoritmo que imprima os números ímpares 
compreendidos entre 5 e 15 (incluindos).  */

void Exercicio04() {

	// inicializando com 5 que é ponto de partida
	int num;

	for(num = 5; num <= 15; num++) {
		// usando o cálculo de resto de divisão
		if(num % 2 != 0)
			printf("%d \n", num);
	}	
}