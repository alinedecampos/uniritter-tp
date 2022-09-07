#include <stdio.h>
// biblioteca de códigos necessária para manipulação de caracteres e cadeias de caracteres
#include <string.h>
// biblioteca de códigos necessária para atuar com conversão de valores de caracteres para outros tipos
#include <stdlib.h>
// biblioteca de códigos necessária para atuar na análise de caracteres
#include <ctype.h> 

void menu() {
	printf("\n\nTRABALHANDO COM STRINGS \n");
	printf("1 | Formas de declaração de strings \n");
	printf("2 | Leitura de caracter\n");
	printf("3 | Leitura usando scanf\n");
	printf("4 | Leitura usando fgets \n");
	printf("5 | Manipulação de strings \n");
	printf("6 | Comparadores \n");
	printf("7 | Conversões de tipos \n");
	printf("8 | Análise de caracter \n");
	printf("0 | Sair \n");
}

void declaracoes() {
	
	// declaração de caracteres com atribuição de valor inicial usando sempre aspas simples
	char caracter = 'A';
	printf("Carater: %c\n", caracter);

	// declaração de strings sem a definição de dimensão só é possível se for atribuído um valor inicial
	// automaticamente será reservada a dimensão de memória equivalente ao conteúdo do que foi atribuído
	// neste caso 11 caracteres mais o elemento '\0' que indica o final da string, portanto é o mesmo que texto[12]
	char texto[] = "programação"; 
	printf("Texto: %s\n", texto);

	// declaração de um string de 100 de dimensão
	// sendo que o valor inicial ocupado é 12 mais o caracter '\0', assim 13 caracteres dos 100 reservados
	char cidade[100] = "Porto Alegre"; 
	printf("Cidade: %s", cidade);
}

void leituraCaracter() {

	// declaração de caracter sem atribuição de valor inicial
	char letra;

	// esta é uma forma de fazer o programa não pular determinado comando de leitura por conta de buffer em memória 
	getchar();
	
	// leitura de um caracter usando função getchar() 
	printf("Digite uma letra: ");
	letra = getchar();

	// imprimindo o caracter lido com getchar() usando printf()
	printf("\nImpressão de caracter com printf(): %c", letra); 

	// imprimindo o caracter lido com getchar() usando putchar()
	printf("\nImpressão de caracter com putchar(): ");
	putchar(letra);
}


void leituraPalavra() {

	// criação uma variável string com dimensão de 21 caracteres
	char termo[21];	
	
	// a leitura de string realizada com scanf() vai reter apenas a primeira palavra
	// ao encontrar um espaço, a leitura finaliza
	printf("Digite um termo com até 20 caracteres:");
	scanf("%s", &termo);
	
	printf("O termo digitado foi: %s", termo);
}

void leituraFrase() {

	// criação uma variável string com dimensão de 21 caracteres
	char frase[21];

	// podemos fazer a leitura iniciando com um espaço em branco e usando expressão regular para ignorar a quebra de linha na gravação dos dados	
	// também poderia ser usado fgets(frase, sizeof(frase), stdin); para leitura de conteúdos que tem espaços entre as palavras
	printf("Digite uma frase com até 20 caracteres:");
	scanf(" %[^\n]", &frase);
	printf("A frase digitada foi: ");
	printf("%s", frase);
}

void manipulacaoStrings() {
	
	int x;
	char str1[20], str2[10];

	printf("\n>> Atribuição de valor e cópia de strings | strcpy() \n\n");

	// para atribuir valor a uma string não podemos fazer isso diretamente
	// por exemplo: str1 = "Olá tudo"; não vai funcionar! 
	// portanto, devemos usar a função strcpy()
	printf("Atribuindo um valor para uma variável do tipo string com strcpy():\n");
	strcpy(str1, "Olá!");	
	printf("str1: %s | str2: %s\n\n", str1, str2);

	// da mesma forma, atribuir diretamente o valor de uma string para outra
	// por exemplo: str2 = str1; não vai funcionar!
	// portanto, devemos também usar a função strcpy()
	printf("Atribuindo o valor de uma string para outra string com strcpy():\n");
	strcpy(str2, str1);
	printf("str1: %s | str2: %s\n", str1, str2);

	printf("\n>> Concatenação de strings | concat() \n");
	// para agrupar valores de strings, devemos usar strcat() 
	// onde a primeira string recebe a concatenação da segunda
	strcat(str1, str2);	
	puts(str1);

	printf("\n>> Contagem de caracteres de uma string | strlen() \n");
	// retorna a quantidade de caracteres que uma string possui, não inclui o '\0' (null) 
	printf("Quantidade de caracteres do conteúdo: %d \n", strlen(str1));

	printf("\n>> Dimensão de um array de caracteres | sizeof() \n");
	// retorna o tamanho total de um array de caracteres, ou seja, o espaço declarado na criação da variável
	// mesmo que ele não esteja completamente ocupado de valores
	printf("Tamanho do array de caracteres: %d \n", sizeof(str1));

	printf("\n>> Buscar em strings | strstr() \n");
	// retorna o restante da string a partir do ponto onde encontra o que foi passado como parâmetro
	printf("Buscando pelo caracter !: %s \n", strstr(str1, "!")); // !!!
}

void comparadores() {
	
	char str1[10] = "ADEF";
	char str2[12] = "ACFG";

	printf("\n>> Comparação de strings | strcmp() \n");
	// comparação de strings usando strcmp() 
	// retorna 0 se for igual, se a primeira string for maior retorna 1, se for menor -1
	if(strcmp(str1, str2) > 0)		
		printf("A primeira string %s é maior que a segunda string %s\n", str1, str2);
	else if(strcmp(str1, str2) < 0)
		printf("A primeira string %s é menor que a segunda string %s\n", str1, str2);
	else 
		printf("As strings %s e %s são iguais!\n", str1, str2);
	
	printf("\n>> Comparação de strings | strspn() \n");	
	// compara uma string com um conjunto de opções e retorna a quantidade de elementos das opções que consta no início da string analisada
	// se o caractere inicial da string analisada pertencer a uma das opções a função continuar analisando até encontrar um caracter que não pertença 	
	char conteudo1[] = "202202-TP-CC/*";
  	char conteudo2[] = "TP/CC-202202";
  	char comparador[] = "0123456789";
    
	printf("conteudo1: %s\n", conteudo1);
	printf("conteudo2: %s\n", conteudo2);
	printf("comparador: %s\n", comparador);
	printf("Há um total de %d dígitos iniciais na string conteudo1.\n", strspn(conteudo1, comparador));
	printf("Há um total de %d dígitos iniciais na string conteudo2.", strspn(conteudo2, comparador));
}

void conversaoStrings() {
	
	// declaração de uma string que contém números
	char str[] = "123";
	char c1 = 'a';
	char c2 = 'A';

	// para usar esses valores como números inteiros devemos converter a string em int com atoi()
	printf("De string para inteiro: %d \n", atoi(str));
	// para usar esses valores como números de ponto flutuante devemos converter a string em int com atof()
	printf("De string para float: %f \n", atof(str));
	// ao converter em valores numéricos podemos utilizar em operações aritméticas
	printf("Usando em operação aritmética: %d \n", (atoi(str) + 100) );

	// convertendo carateres maiúsculas e minúsculas | toupper() e tolower()
	printf("Passando caracteres para maiúsculas: %c para %c \n", c1, toupper(c1));
	printf("Passando caracteres para minúsucas:  %c para %c \n", c2, tolower(c2));

}

void analiseCaracter() {

	char c = 'A';	

	// funções que avaliam características de um caracter e retornam sempre true ou false
	if(isalnum(c))
		printf("É um alfanumerico. \n");
	if(isalpha(c))
		printf("É um caratere alfabético. \n");
	if(isdigit(c))
		printf("É um dígito numérico. \n");
	if(iscntrl(c))
		printf("É um controle. \n");
	if(isspace(c))
		printf("É um espaço. \n");
	if(ispunct(c))
		printf("É uma pontuação. \n");	
	if(isupper(c))
		printf("É um caracter maiúsculo.\n");	
	if(islower(c))
		printf("É um caracter minúsculo.\n");	

}

int main(void) {

	int op;
	
	do {
		menu();
		
		printf("Digite a opção desejada (0 para sair): ");
		scanf("%d", &op);
		
		switch(op) {
			case 0:
				printf("Saindo...");
				break;
			case 1:
				printf("\n**** FORMAS DE DECLARAÇÃO DE STRINGS ****\n");
				declaracoes();
				break;
			case 2:
				printf("\n**** LEITURA DE CARACTERES ****\n");
				leituraCaracter();
				break;
			case 3:	
				printf("\n**** LEITURA DE STRINGS COM SCANF() ****\n");
				leituraPalavra();
				break;
			case 4:	
				printf("\n**** LEITURA DE STRINGS COM FGETS() ****\n");
				leituraFrase();
				break;
			case 5:
				printf("\n**** MANIPULAÇÃO DE STRINGS ****\n");
				manipulacaoStrings();
				break;
			case 6:
				printf("\n**** COMPARAÇÃO ENTRE EM STRINGS ****\n");
				comparadores();
				break;
			case 7:
				printf("\n**** CONVERSÃO DE TIPOS ****\n");
				conversaoStrings();
				break;
			case 8:	
				printf("\n**** ANÁLISE DE CARACTERES ****\n");
				analiseCaracter();
				break;
			default:	
				printf("Opção inválida");
		}

		getchar();
		printf("\n\nEnter para continuar...");
		getchar();
		system("clear");
		
	} while(op != 0);
		
  return 0;
}