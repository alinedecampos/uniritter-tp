#include <stdio.h>

/* 03. Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista
estava dirigindo nela e crie uma função que calcule a multa que uma pessoa vai receber,
sabendo que são pagos: 50 reais se o motorista ultrapassar em até 10km/h a velocidade
permitida (por exemplo, se a velocidade máxima é 50km/h e o motorista está em 60km/h
ou em 56km/h), será de 100 reais se o motorista ultrapassar de 11 a 30 km/h a velocidade
permitida e 200 reais, se estiver acima de 31km/h da velocidade permitida. */

int calculomulta(int velmaxima, int velmotorista) {

	int vel, multa;	
	
	vel = velmotorista - velmaxima;

	if(vel > 0 && vel <= 10)
		multa = 50;
	else if(vel >= 11 && vel <= 30)
		multa = 100;
	else if(vel >= 31)
		multa = 200;
	else 
		multa = 0;

	return multa;
}


int main(void) {

	int velmaxima, velmotorista, multa;
	
	printf("Digite a velocidade máxima permitida: ");
	scanf("%d", &velmaxima);

	printf("Digite a velocidade do motorista: ");
	scanf("%d", &velmotorista);
	
	multa = calculomulta(velmaxima, velmotorista);

	if(multa == 0)
		printf("Não há multa para este motorista");		
	else
		printf("A multa é de %d", multa);
	
	return 0;
}