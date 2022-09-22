#include <stdio.h>

/*  02. Crie uma função que que informa se um ano é ou não bissexto. Lembrando que um ano é
bissexto se ele for divisível por 400 ou se ele for divisível por 4 e não por 100. */

void bissexto(int ano) {
	
	if( (ano % 400 == 0) || ( (ano % 4 == 0)  && (ano % 100 != 0) ) )
		printf("O ano %d é bissexto. ", ano);
	else 
		printf("O ano %d não é bissexto.", ano);
	
}


int main(void) {

	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	bissexto(ano);
	
	return 0;
}