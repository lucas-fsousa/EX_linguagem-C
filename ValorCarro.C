#include <stdio.h>

int main(void){
    // Declaracao de variaveis
	float calcCusto, valorcarro;

	// Entrada dos valores
	printf("Digite o preco de fabrica do carro R$");
	scanf("%f", &valorcarro);

	// Calculo dos valores
	calcCusto = valorcarro + (valorcarro * 42) / 100;

	// Resultado final
	printf("O valor final a ser pago pelo carro sera de R$%.2f", calcCusto);
	return 0;
}
