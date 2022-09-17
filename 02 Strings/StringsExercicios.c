#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
	
void exercicio01() { 
	
	/* ENUNCIADO | EXERCÍCIO 01 
	Leia um array de caracteres digitado pelo teclado e 
	substitua todas as ocorrência da letra A pelo caracter @ */
	
	int i = 0, tam = 30;
	char texto[tam];

	printf("Digite o texto: ");
	getchar();
	fgets(texto, tam, stdin);

	do {
		printf("Letra: %c \n", texto[i]);

		// tolower(texto[i]) == 'a' | toupper
		if(texto[i] == 'a' || texto[i] == 'A')
			texto[i] = '@';	
		i++;

	} while(i < strlen(texto));

	printf("Resultado: ");
	puts(texto);
	
}

void exercicio02() {

	/* ENUNCIADO | EXERCÍCIO 02
	Escreva um programa que leia uma frase dada pelo usuário e conte quantas 
	vezes cada uma das vogais aparecem na frase. Mostre os valores para cada vogal. */
	
	int x = 0, tam = 30;
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	char texto[tam];
	
	getchar();
	printf("Digite o texto: ");
	fgets(texto, tam, stdin);

	do {
		printf("Letra: %c \n", texto[x]);

		switch(tolower(texto[x])) {
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'u':
				u++;
				break;
		}
		
		x++;
		
	} while(x < strlen(texto));

	printf("Quantidade do caracter 'a': %d \n", a);
	printf("Quantidade do caracter 'e': %d \n", e);
	printf("Quantidade do caracter 'i': %d \n", i);
	printf("Quantidade do caracter 'o': %d \n", o);
	printf("Quantidade do caracter 'u': %d \n", u);	
}

void exercicio03() {

	/* ENUNCIADO | EXERCÍCIO 03
	Faça um programa que lê uma string e retorna a string invertida. */
	
	int i = 0, tam = 30;
	char texto[tam];
	
	printf("Digite o texto: ");
	// sizeof(texto)
	fgets(texto, tam, stdin);

	for(i = strlen(texto); i >= 0; i--) {
		printf("%c", texto[i]);
	}
			
}

void exercicio04() {

	/* ENUNCIADO | EXERCÍCIO 04
	Crie um programa que simule a análise de usuário e senha. */

	char baseusuario[15] = "aline@teste";
	char basesenha[10] = "lerolero";

	char usuario[15], senha[10];

	// atenção para o uso de fgets que pega a quebra de linha junto 
	printf("Digite seu usuário: ");
	scanf("%s", &usuario);

	printf("Digite sua senha: ");
	scanf("%s", &senha);
	
	if( (strcmp(baseusuario, usuario) == 0) && (strcmp(basesenha, senha) == 0))
		printf("Bem vindo(a)!");
	else
		printf("Usuário ou senha incorretos");
		
}

void exercicio05() {

	/* ENUNCIADO | EXERCÍCIO 05
	Crie um programa que apresenta o número de letras, o número de dígitos e o número de
	símbolos contidos em uma string de entrada. */

	int i, letras = 0, numeros = 0, simbolos = 0;
	char texto[100];

	getchar();
	printf("Digite o seu texto para análise: ");
	fgets(texto, sizeof(texto), stdin);

	printf("O texto digitado foi: \n");
	puts(texto);

	for(i = 0; i < strlen(texto); i++) {

		if(isalpha(texto[i]))
			letras++;
		else if(isalnum(texto[i]))
			numeros++;
		else if(ispunct(texto[i]))
			simbolos++;	
	}	

	printf("Quantidade de letras: %d\n", letras);
	printf("Quantidade de números: %d\n", numeros);
	printf("Quantidade de símbolos: %d\n", simbolos);
}

void exercicio06() {

	/* ENUNCIADO | EXERCÍCIO 06
	Escreva um programa para corrigir provas de múltipla escolha de 5 questões. O programa
	deve ler o gabarito da prova (que é um vetor de caracteres de 5 elementos) e as respostas
	do aluno. Mostre a quantidade de acertos e erros. */ 
	int i;
	int numquestoes = 5;
	int acertos = 0;
	char gabarito[6];
	char respostas[6];

	printf("Digite o gabarito da prova!\n");

	for(i = 0; i < numquestoes; i++) {
		printf("Resposta do gabarito para questão %d: ", i+1);
		scanf(" %c", &gabarito[i]);
	}

	printf("Confira o gabarito: ");
	puts(gabarito);

	for(i = 0; i < numquestoes; i++) {
		printf("Resposta do aluno para a questão %d: ", i);
		scanf(" %c", &respostas[i]);
	}
	
	for(i = 0; i < numquestoes; i++) {
		if(toupper(gabarito[i]) == toupper(respostas[i]))
			acertos++;
	}

	printf("Número de acertos: %d\n", acertos);
	printf("Número de erros: %d\n", (numquestoes - acertos));
	
	
		
}

void menu() {
	printf("\n\nSTRINGS E CARACTERES | RESOLUÇÃO DAS ATIVIDADES PRÁTICAS \n");
	printf("1 | Exercício 01 \n");
	printf("2 | Exercício 02 \n");
	printf("3 | Exercício 03 \n");
	printf("4 | Exercício 04 \n");
	printf("5 | Exercício 05 \n");
	printf("6 | Exercício 06 \n");
	printf("0 | Sair \n");
}

void escolha(int op) {

	switch(op) {
		case 0:
			printf("Saindo...");
			break;
		case 1:
			printf("\n**** RESOLUÇÃO EXERCÍCIO 01 ****\n");
			exercicio01();
			break;
		case 2:
			printf("\n**** RESOLUÇÃO EXERCÍCIO 02 ****\n");
			exercicio02();
			break;
		case 3:	
			printf("\n**** RESOLUÇÃO EXERCÍCIO 03 ****\n");
			exercicio03();
			break;
		case 4:	
			printf("\n**** RESOLUÇÃO EXERCÍCIO 04 ****\n");
			exercicio04();
			break;
		case 5:
			printf("\n**** RESOLUÇÃO EXERCÍCIO 05 ****\n");
			exercicio05();
			break;
		case 6:
			printf("\n**** RESOLUÇÃO EXERCÍCIO 06 ****\n");
			exercicio06();
			break;
		default:	
			printf("Opção inválida");
		}
	
	getchar();
	printf("\n\nEnter para continuar...");
	getchar();
	system("clear");
}

int main(void) {

	int op;
	do {
		menu();
		printf("Digite a opção desejada (0 para sair): ");
		scanf("%d", &op);
		escolha(op);
	} while(op != 0);
			
	return 0;
}