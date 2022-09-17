#include <stdio.h>
#include <stdlib.h>

// Protótipo das funções 
// Deve ser estar no início do código fonte, acima da função main()
void boasvindas();
void boasvindasrepeticao(int num);
int sorteio();
int somanumeros(int x, int y);

// Função principal, é a primeira a ser executada, a ordem das execuções é definida por ela
void main() {
	
	int numsorteio, soma;
	
	/* Chamada da função sem parâmetros e sem retorno
	Chama a função, executa as instruções dentro dela e volta para main() para 
	continuar executando o restante */
	boasvindas();

	/* Chamada da função com parâmetro e sem retorno
	Chama a função, executa as instruções dentro dela levando em consideração 
	os parâmetros recebidos e volta para main() para continuar executando o restante */
	boasvindasrepeticao(10);

	/* Chamada da função sem parâmetro e com retorno
	Chama a função, executa as instruções dentro dela e retorna um valor que será associado a variável numsorteio 
	sendo assim esse valor pode ser utilizado no decorrer da execução da função main() */
	numsorteio = sorteio();
	printf("O número sorteado foi: %d\n", numsorteio);

	/* Chamada da função com parâmetros e com retorno
	Chama a função passando parâmetros que serão usados na execução das instruções dentro dela e 
	retorna um valor que será associado a variável soma, sendo assim esse valor pode ser utilizado 
	no decorrer da execução da função main() */
	soma = somanumeros(5, 3);
	printf("O valor da soma foi: %d\n", soma);
}

// Função não tem parâmetros e não tem retorno
void boasvindas() {
	printf("Seja bem vindo(a)!\n");
}

/* Função tem parâmetros e não tem retorno
O valor num recebido por parâmetro será usado dentro da função e só é acessível aqui dentro */
void boasvindasrepeticao(int num) {
	/* Esta variável i só tem validade dentro desta função, é uma variável 
	local, sendo assim seu valor não é acessível em outras funções */
	int i;
	for(i = 0; i < num; i++) 
		printf("Boas vindas!\n");
}

// Função não tem parâmetros e tem retorno
int sorteio() {
	// variáveis com valores acessíveis apenas dentro desta função
	int x;
	/* Para usar a função rand deve-se chamar o include da biblioteca stdlib.h 
	Para determinar um escopo de valore usa-se o sinal % seguido do valor máximo desejado */
	x = rand() % 100;
	return x;

	/* Uma forma de simplificar seria utilizar return (rand() % 100); 
	onde seria calculado o valor e retornado o mesmo para a main() */
}

// Função tem parâmetros e tem retorno
int somanumeros(int x, int y) {
	int soma;
	soma = x + y;
	return soma; 
}
