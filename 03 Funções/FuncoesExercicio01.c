#include <stdio.h>

float calculardesconto(float valor, float porcentagem) {
  float valorapagar;
  valorapagar = (valor * porcentagem);
  return valorapagar;
}

float valorfinal(float valor, float desconto) { 
	return (valor - desconto); 
}

int main(void) {

  int op;
  float resultado;
  float porc;
  float valor;
  float desconto;

  printf("Digite o valor do carro que está comprando: \n");
  scanf("%f", &valor);
  printf("Valor sem desconto: %0.3f \n", valor);

  do {

    printf("\n\nDigite o tipo de combustivel do carro (digite 0 para sair):\n");
	printf("1 | Alcool\n2 | Gasolina\n3 | Diesel \n\n");
	  
	scanf("%d", &op); 

	    switch (op) {
		    case 0:
		      printf("Obrigado, volte sempre!");
		      break;
		    case 1:
		      porc = 0.25;
		      break;
		    case 2: 
		      porc = 0.21;
		      break;
		    case 3: 
		      porc = 0.14;
		      break;
		    default:
		      printf("Opção inválida!\n");
	    }

		if(op > 0 && op <= 3) {
			  desconto = calculardesconto(valor, porc);
			  printf("Seu desconto de %0.0f%% será de: %0.3f\n", (porc * 100.0), desconto);
		   
		      resultado = valorfinal(valor, desconto);
		      printf("O valor total do carro ficará: %0.3f\n", resultado);	
		}
	  
  } while (op != 0);

  return 0;
}