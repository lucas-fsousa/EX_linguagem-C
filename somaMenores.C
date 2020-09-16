#include <stdio.h> // Biblioteca padrão para utilizar comando de entrada e saida de dados.

int main(void){ // Inicio do código principal
    float n0, n1, n2, n3, soma; // Declaração de variaveis
    //Entrada de dados do usuario
    printf("Digite um numero: "); // Informa na tela que o usuario deve digitar um numero.
    scanf("%f", &n0); // Leitura do valor a ser digitado pelo usuario
    printf("Digite um numero: "); // Informa na tela que o usuario deve digitar um numero.
    scanf("%f", &n1); // Leitura do valor a ser digitado pelo usuario
    printf("Digite um numero: "); // Informa na tela que o usuario deve digitar um numero.
    scanf("%f", &n2); // Leitura do valor a ser digitado pelo usuario
    printf("Digite um numero: "); // Informa na tela que o usuario deve digitar um numero.
    scanf("%f", &n3); // Leitura do valor a ser digitado pelo usuario
    if(n0 == n1 || n0 == n2 || n0 == n3 || n1 == n2 || n1 == n3 || n3 == n2){ // Verifica se algum dos numeros digitados pelo usuario se reperiu.
        printf("Digite numeros diferentes!"); // informa na tela que houveram numeros repetidos e encerra o programa.
    }else if(n0 > n1 && n0 > n2 && n0 > n3) { // Verifica se o n0 é maior que os outros numeros se verdade, será realizado todos os procedimentos dentro da chave e o programa sera encerrado
        soma = n1 + n2 + n3; // Realiza a soma dos 3 numeros menores
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n0, soma); // informa ao usuario o resultado
    }else if(n1 > n0 && n1 > n2 && n1 > n3) { // Verifica se o n1 é maior que os outros numeros se verdade, será realizado todos os procedimentos dentro da chave e o programa sera encerrado
        soma = n0 + n2 + n3; // Realiza a soma dos 3 numeros menores
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n1, soma); // informa ao usuario o resultado
    }else if(n2 > n0 && n2 > n1 && n2 > n3) { // Verifica se o n2 é maior que os outros numeros se verdade, será realizado todos os procedimentos dentro da chave e o programa sera encerrado
        soma = n0 + n1 + n3; // Realiza a soma dos 3 numeros menores
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n2, soma); // informa ao usuario o resultado
    }else{ // Se nenhuma das condições anteriores forem verdadeiras significa que o n3 é o maior numero e será realizada a soma dos 3 menores numeros
        soma = n0 + n1 + n2; // Realiza a soma dos 3 numeros menores
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n3, soma); // informa ao usuario o resultado
    }
    return 0; // retorna erros caso ocorram
} // Fim do código principal
