#include <stdio.h> // Inicializa a biblioteca de comandos

//PROGRAMA PRINCIPAL
int main(void){ // Inicio do programa principal

    // DECLARAÇÃO DE VARIAVEIS

    int idade; // variavel idade do tipo inteiro
    float peso, altura; // variavel peso e altura do tipo float
    char nome[20]; // variavel nome do tipo caractere / string

    printf("Digite seu nome: "); // comando de saida informando ao usuario o que deve ser digitado.
    scanf("%s", &nome); // comando para guardar os dados digitados dentro da variavel nome

    printf("%s, qual a sua altura? ", nome); // comando de saida informando o que deve ser digitado em seguida.
    scanf("%f", &altura); // comando para guardar os dados digitados dentro da variavel altura

    printf("Qual o seu peso?kg "); // comando de saida informando o que deve ser digitado em seguida.
    scanf("%f", &peso); // comando para guardar os dados digitados dentro da variavel peso

    printf("e a sua idade? "); // comando de saida informando o que deve ser digitado em seguida.
    scanf("%d", &idade); // comando para guardar os dados digitados dentro da variavel idade

    printf("O usuario %s tem %d anos, %.2fkg e mede %.2fmts\n\n.", nome, idade, peso, altura); // comando de saida mostra o resultado para o usuario

    return 0; // retorna o erro caso ocorra.

} // fim do programa principal
