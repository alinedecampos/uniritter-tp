#include <stdio.h>

/* 4. Crie um programa que leia dois valores e realize uma das operações descritas a seguir. O
usuário deve poder escolher opções enquanto o valor 0 não for digitado. Você deve criar
uma função para cada opção e realizar as chamadas corretamente:
1 – Soma
2 – Subtração
3 – Multiplicação
4 – Divisão
5 – Comparação (informando se eles são iguais ou, no caso de diferentes, qual é o maior
entre eles)
*/

int soma(float x1, float x2) {
	printf("Resultado da soma de %.2f e %.2f é: %.2f", x1, x2, (x1 + x2));	
}

void subtracao(float x1, float x2) {
	printf("Resultado da subtração de %.2f e %.2f é: %.2f", x1, x2, (x1 - x2));	
}

void multiplicacao(float x1, float x2) {
	printf("Resultado da multiplicação de %.2f e %.2f é: %.2f", x1, x2, (x1 * x2));	
}

void divisao(float x1, float x2) {
	printf("Resultado da divisão de %.2f e %.2f é: %.2f", x1, x2, (x1/x2));	
}

void comparacao(float x1, float x2) {

	if(x1 == x2)
		printf("Resultado da comparação de %.2f e %.2f é: são iguais.", x1, x2);	
	else if(x1 > x2)
		printf("Resultado da comparação de %.2f e %.2f é: %.2f é maior.", x1, x2, x1);	
	else
		printf("Resultado da comparação de %.2f e %.2f é: %.2f é maior.", x1, x2, x2);	
}


int main(void) {

	int op;
	float v1, v2;
	
	printf("Digite o primeiro valor: \n");
	scanf("%f", &v1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &v2);

	do {
		printf("\n\nOPÇÕES: \n");
		printf("1 – Soma\n");
		printf("2 – Subtração\n");
		printf("3 – Multiplicação\n");
		printf("4 – Divisão\n");
		printf("5 – Comparação\n"); 
		printf("Digite a opção desejada (0 para sair): \n");
		scanf("%d", &op);

		switch(op) {
			case 1:
				soma(v1, v2);
			break;
			case 2:
				subtracao(v1, v2);
			break;
			case 3:
				multiplicacao(v1, v2);
			break;
			case 4:
				divisao(v1, v2);
			break;
			case 5:
				comparacao(v1, v2);
			break;
		}

	} while(op != 0);
	
  	return 0;
}