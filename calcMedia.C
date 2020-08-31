#include <stdio.h>

int main(void){

    //Declaracao de variaveis
    float nota1, nota2, media;
    int p1, p2;


    p1 = 2; p2 = 3; // Atribuicao de valores

    //Entrada de dados digitados pelo usuario
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    media = ((nota1*p1) + (nota2*p2)) / 5; // Calcula a média

    printf("\nA media do aluno: %.1f\n", media); // Informa o resultado do calculo da média para o usuario

    return 0; // Retona o erro caso ocorra.
}
