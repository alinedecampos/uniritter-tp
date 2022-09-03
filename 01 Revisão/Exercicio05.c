#include <stdio.h>

/* Crie um algoritmo que leia três números da tela: op, v1 e v2. Se op for 1, você deve realizar a
soma entre v1 e v2. Se op for 2, realize a subtração. Se op for 3, realize a multiplicação. Caso
op for 4, realize a divisão. Para fazer o programa de forma modularizada, crie funções para
cada operação. Ao final, imprima o resultado corretamente.
*/

void soma(float v1, float v2) {
	printf("Você escolheu a operação de soma e o resultado é: %.2f", (v1 + v2));
}

void subtracao(float v1, float v2) {
	printf("Você escolheu a operação de subtração e o resultado é: %.2f", (v1 - v2));
}

void multiplicacao(float v1, float v2) {
	printf("Você escolheu a operação de multiplicação e o resultado é: %.2f", (v1 * v2));
}

void divisao(float v1, float v2) {
	printf("Você escolheu a operação de divisão e o resultado é: %.2f", (v1 / v2));
}

void Exercicio05() {

	int op;
	float v1, v2, resp;

	printf("OPERAÇÕES DISPONÍVEIS \n");
	printf("1 | Soma \n");
	printf("2 | Subtração \n");
	printf("3 | Multiplicação \n");
	printf("4 | Divisão \n\n");

	printf("Digite o valor para v1: ");
	scanf("%f", &v1);
	printf("Digite o valor para v2: ");
	scanf("%f", &v2);
	printf("Digite a opção: ");
	scanf("%d", &op);

	switch(op) {
		case 1:
			soma(v1, v2);
			break;   // Impede que as próximas instruções sejam executadas
		case 2: 
			subtracao(v1, v2);
			break;   
		case 3: 
			multiplicacao(v1, v2);
			break;
		case 4: 
			divisao(v1, v2);
			break;
		default: // Será executado para qualquer opção diferente de 1, 2, 3 e 4
			printf("Opção Inválida !\n");
	}
}




