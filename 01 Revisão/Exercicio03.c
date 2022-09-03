/*
Crie um algoritmo que efetue a leitura de três valores para
os lados de um triângulo, considerando lados como: A, B e C.
O algoritmo deverá verificar se os lados fornecidos formam
realmente um triângulo (cada lado é menor que a soma dos
outros dois lados). Se for esta condição verdadeira, deverá
ser indicado qual tipo de triângulo foi formado: isósceles
(dois lados iguais e um diferente), escaleno (todos os lados
diferentes) ou equilátero (todos os lados são iguais).
*/

void Exercicio03() {
	
	float la, lb, lc;
	
	printf("Informe o primeiro lado do triângulo: ");
	scanf("%f", &la);
	
	printf("Informe o segundo lado do triângulo: ");
	scanf("%f", &lb);
	
	printf("Informe o terceiro lado do triângulo: ");
	scanf("%f", &lc);
	
	// Se os três lados forem iguais é equilatero
	if ((la == lb) && (la == lc)) {
		printf("\nEste triângulo é Equilátero\n");
	} else {
		/* Se chegou aqui é porque os três lados não são iguais. Basta ver
		se dois deles são iguais para saber se é isóceles */
		if ((la == lb) || (lb == lc) || (lc == la)) {
			printf("\nEste triângulo é Isósceles\n");
		} else {
			printf("\nEste triângulo é Escaleno\n");
		}
	}
}
