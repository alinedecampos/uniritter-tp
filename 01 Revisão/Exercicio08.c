#include <stdio.h>

/* Crie um algoritmo faça as seguintes ações:
Exibe um menu de opções:
1- Saudações; 2- Greetings; 3- Sair
Faz uma estrutura de repetição que apresenta o menu enquanto a opção escolhida não
corresponder a 3, e a cada vez apresentar uma das ações a seguir:
1 – Saudações – escreve a palavra “Olá!”;
2 – Greetings – escreve a palavra “Hello!”;
3 – Sair.
Ao sair do laço de repetição deve exibir uma mensagem de “Fechando!”. */

void Exercicio08() {

	int op;

	do {		
		printf("\nMenu\n");
		printf("1 – Saudações\n");
		printf("2 – Greetings\n"); 
		printf("3 – Sair\n");
		printf("----------------\n");
		printf("Digite o número da opção: ");
		scanf("%d", &op);

		switch(op) {
			case 1: 
				printf("Olá!");
				break;
			case 2: 
				printf("Hello");
				break;
			case 3: 
				printf("Fechando...");
				break;
			default:	
				printf("Opção inválida!");
		}
		
	} while(op != 3);
	
}