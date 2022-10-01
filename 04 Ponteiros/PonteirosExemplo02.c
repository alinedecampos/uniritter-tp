#include <stdio.h>

void troca_sem_ponteiros(int cx, int cy) {
  	int temp;
  	
	temp = cx; // variável temp recebe o valor de cx que foi recebido através de cópia
  	cx = cy;   // o valor que está na variável cy é atribuído para a variável x 
	cy = temp; // o valor que está na variável temp é atribuído para a variável y
	
	/* Pode-se visualizar que a troca de valores foi realizada para as variáveis cx e cy
	entretanto, não se tem um retorno de dados. Como os foram passados por CÓPIA,
    x e y da função main() continuma os mesmo */
	printf("NA FUNÇÃO TROCA() | Os valores são: X=%d e Y=%d\n", cx, cy);	
}

//função com passagem por referência
//note que a função tem dois ponteiros como parâmetros
//função que troca os valores inteiros apontados por ptrx e ptry
void troca_com_ponteiros(int *px, int *py) {

	int temp;
	
  	temp = *px; // variável temp recebe o conteúdo apontado por px (valor que está no endereço &x)
  	*px = *py;  // o valor que está no local apontado por py é atribuído para o local apontado por px
	*py = temp; // o valor que está na variável temp é atribuído o valor que está no local apontado por py 

	/* A troca de valores foi realizada, mesmo não havendo retorno de dados, como usou-se
	REFERÊNCIA (e não cópia!), os valores foram mudados em suas localizações,
	o que fará com que ao ser verificar no main() os valores de x e y estejam trocados */
	printf("NA FUNÇÃO TROCA() | Os valores são: X=%d e Y=%d\n", *px, *py);	
}

int main(void) {

	// Declaração das variávis x e y na memória com valores atribuídos
	int x = 2, y = 3;

	// Processo de troca entre dois valores utilizando função com cópia de dados
	printf(">>> TROCA DE VALORES SEM PONTEIROS <<<\n\n");
	printf("NA FUNÇÃO MAIN() | ANTES | Os valores são: X=%d e Y=%d\n", x, y);
	troca_sem_ponteiros(x, y);
	printf("NA FUNÇÃO MAIN() | DEPOIS | Os valores são: X=%d e Y=%d\n\n\n", x, y);	
	
	// Processo de troca entre dois valores utilizando função com ponteiros 
	printf(">>> TROCA DE VALORES COM PONTEIROS <<<\n\n");
	printf("NA FUNÇÃO MAIN() | ANTES | Os valores são: X=%d e Y=%d\n", x, y);
	troca_com_ponteiros(&x, &y);  
	printf("NA FUNÇÃO MAIN() | DEPOIS | Os valores são: X=%d e Y=%d\n", x, y);

}