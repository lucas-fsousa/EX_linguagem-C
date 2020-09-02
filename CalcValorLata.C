#include <stdio.h>
#define aluminio 100
#define pi 3.14

int main(void){
	
	// Declaracao de variaveis
	float raio, altura, areabase, arealado, arealata, custolata;
	
	// Entrada de dados
	printf("Digite o raio da lata: ");
	scanf("%f", &raio);
	printf("Digite a altura da lata: ");
	scanf("%f", &altura);
	
	// Calculos
	areabase =  pi* raio * raio * 2;
	arealado = 2 * pi * raio * altura;
	arealata = areabase + arealado;
	custolata = arealata * aluminio;
	
	// Informe do resultado para o usuario
	printf("O preco a ser pago pela lata nas dimensoes %.2fx%.2f e de R$%.2f", areabase, arealado, custolata);
	
	return 0;
}
