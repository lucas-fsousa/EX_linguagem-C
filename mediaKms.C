#include <stdio.h>

int main(void){ // Inicio do programa

    //Declaracao das variaveis
    float kmpercorrido, kmlitro, calclitros, valorcombusivel, calcvalorcombustivel;

    // Entrada de dados que o usuario especificara
    printf("Quantidade media de combustivel por KM rodado: ");
    scanf("%f", &kmlitro);
    printf("\nQuantidade de KM percorridos: ");
    scanf("%f", &kmpercorrido);
    printf("\nQual o valor do combustivel R$");
    scanf("%f", &valorcombusivel);

    //Calculos dos resultados

    calclitros = kmpercorrido / kmlitro;
    calcvalorcombustivel = valorcombusivel * calclitros;

    // Informe de resultado para o usuario
    printf("\nSerao necessarios %.4f litros de combustivel para percorrer %.1fkm\n", calclitros, kmpercorrido);
    printf("O valor total a ser pago é de R$%.2f\n", calcvalorcombustivel);

    // Retorno de erros caso ocorra
    return 0;

} // FIm do programa
