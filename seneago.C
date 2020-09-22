#include <stdio.h>
#include <string.h>

int main(void){
    char categoria[12] = ""; // Declaração de variaveis do tipo char(string)
    float taxa, aguacons, total; // Declaracao de variavel do tipo float
    printf("\n CATEGORIAS DISPONIVEIS: INDUSTRIAL - EMPRESARIAL - RESIDENCIAL"); // Informa ao usuario as opções válidas
    printf("\nInforme a categoria do cliente: "); // informa ao usuario o que deve ser digitado
    scanf("%s", &categoria); // Faz a leitura e armazena do que o usuario digitar na variavel categoria
    printf("\nInforme a quantidade de agua consumida: "); // Informa ao usuario o que deve ser digitado em seguida
    scanf("%f", &aguacons); // Faz a leitura dos dados digitados pelo usuario e armazena na variavel aguacons
    if(strcmp(categoria, "RESIDENCIAL") == 0){ // Verifica se o usuario é de categoria residencial
        taxa = 5.0 + (0.05 * aguacons); // A taxa sera de 5 reais + o valor referente a quantidade de agua consumida
    }else if(strcmp(categoria, "EMPRESARIAL") == 0){ // verifica se o usuario é de categorial empresarial
        if(aguacons <= 80){ // Se a quantidade de agua nao exeder 80³ de agua, este para somente a taxa de 500 reais
            taxa = 500;
        }else{ // Se o consumo exeder o limite sera cobrada a taxa + a quantidade excedida
            taxa = 500 + (0.25 * aguacons);
        }
    }else if(strcmp(categoria, "INDUSTRIAL") == 0){ // Verifica se o usuario é de categoria industrial
        if(aguacons <= 100){ // Se a quantidade de agua nao exeder 100³ de agua, este para somente a taxa de 500 reais
            taxa = 800;
        }else{ // Se o consumo exeder o limite sera cobrada a taxa + a quantidade excedida
            taxa = 800 +(0.04 * aguacons);
        }
    }else{ // Informará um erro caso o usuario digite uma opção invalida
        printf("Alternativa invalida. Tente novamente.");
    }
    // Mostra na tela a informação final da solicitação do usuario
    printf("Para o consumo %.2f sera necessario efetuar o pagamento de R$%.2f", aguacons, taxa);
    return 0; // Retorna erros caso ocorram
}
