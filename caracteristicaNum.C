#include <stdio.h>
#include <math.h>
int main(void){
    int qc, num, verificador, soma, resto; // Declaração de variavel inteira
    printf("Digite um numero de 4 digitos: "); // Informa ao usuario o que deve ser digitado
    scanf("%d", &num); // Faz a leitura e armazenamento do numero digitado pelo usuario
    if(num < 1000 || num > 9999){ // Verifica se o numero possui 4 digitos, se verdadeiro retorna mensagem de erro
        printf("Digite um numero de apenas 4 digitos.");
    }else{
        qc = num / 100; // Quociente recebera a divisão inteira do numero digitado por 100
        resto = num % 100; // O resto sera o 'resto' da divisao inteira do numero por 100
        soma = resto + qc; // A soma recebera o resto e o quociente
        verificador = pow(soma, 2); // O verificador será a soma elevado a 2(elevado ao quadrado)
        if(verificador == num){ // Se o numero digitado for igual ao verificador, este possui a caracteristica
            printf("Possui a caracteristica");
        }else{
            printf("Nao possui a caracteristica");
        }
    }
    return 0; // Retorna erros caso ocorram
}
