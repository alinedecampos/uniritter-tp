#include <stdio.h>

int main(void) {

	// Declaração padrão de uma variável com atribuição de valor
	int x = 5;
	/* Declaração de um ponteiro. Usa-se o símbolo * seguido 
	do nome de identificação do ponteiro */
	int *px;

	// Apresenta o valor armazenado na variável x
 	printf("Valor de x: %d\n", x);
	// Apresenta o endereço de memória onde está armazenado o valor da variável x
	printf("Endereço de x: %d\n\n", &x);

	/* Está sendo asssociado um ENDEREÇO DE MEMÓRIA para o PONTEIRO
	Deve-se associar o ENDEREÇO com o símbolo & seguido da variável desejada 
	Para esta associação de ENDEREÇO não se deve usar o símbolo * do PONTEIRO
	Neste caso o ponteiro nomeado como px vai receber o endereço de memória da variável x */
	px = &x;
	
	printf("Valor de px: %d (enderço de memória de x)\n", px);
	printf("Valor de *px: %d (aponta para o valor armazenado em x)\n\n", *px);

	/* Atribuição de valor para o ENDEREÇO DE MEMÓRIA apontado pelo PONTEIRO
	neste caso, *px aponta para &x que vai receber o valor 8 */
	*px = 8;
	// Logo, ao acessar o valor de x será apresentado o valor 8
	printf("Valor de x: %d\n", x);
	
}