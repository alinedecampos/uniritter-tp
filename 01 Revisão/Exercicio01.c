/* Crie um algoritmo que efetue o cálculo da área de uma circunferência,
recebendo o valor do raio e apresentando a medida da área calculada.
Para calcular a área use PI multiplicado pelo raio na potência 2. */

void Exercicio01() {

  float raio;
  float area = 0.0;
  float pi = 3.14; // considerando o valor PI como 3.14

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);
  printf("O valor do raio é: %.2f", raio);

  // aqui também poderíamos usar o valor da constante PI definida
  // na biblioteca Matematica chamando mat.PI
  area = pi * pow(raio, 2.0);
  printf("\nA área da circunferência é: %.2f", area);
	
  return 0;  
} 
