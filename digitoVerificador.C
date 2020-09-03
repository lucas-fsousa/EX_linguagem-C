#include <stdio.h>

int main(void){

    // Declarando variaveis
    int n1, n2, n3, inverso, conta, soma, digito, aux;

    // Entrada de dados do usuario
    printf("Digite os 3 digitos da conta: ");
    scanf("%d", &conta);

    aux = conta; // Guarda o valor da conta

    // PROCESSO DE CALCULO (Começando do ultimo numero)
    n3 = conta % 10; // Numero 3 vai receber o resto da divisão inteira da conta por 10
    conta = conta / 10; // A conta passará a ser ela mesma dividida por 10;

    n2 = conta % 10; // Numero 2 vai receber o resto da divisão inteira da conta por 10
    conta = conta / 10; // A Conta passará novamente a ser ela mesma dividida por 10;

    n1 = conta % 10; // Numero 1 vai receber o resto da divisão inteira de conta por 10
    conta = conta / 10; // A conta passará mais uma vez a ser ela mesma dividia por 10;

    n1 *= 1; // N1 recebera  ele mesmo multiplicado por 1 .
    n2 *= 10; // N2 recebera ele mesmo multiplicado por 10 e resultará no numero base da casa de dezenas
    n3 *= 100; // N3 recebera ele mesmo multiplicado por 100 resultará no numero base da case de centenas

    conta = aux; // Devolve o valor inicial da conta que foi digitado pelo usuario;

    inverso = n1 + n2 + n3; // A soma de N1+N2+N3 resultará no numero inverso
    soma = conta + inverso; // Somatória dos valores "CONTA" e "INVERSO";

    // Processo de calculo para encontrar o digito da conta.
    n1 = soma % 10; // N1 recebera o resto da soma de conta e inverso
    n1 *= 1; // N1 agora recebera ele mesmo * 1 que é a sua posicao na soma
    soma = soma / 10; // Soma recebera a soma dividida por 10

    n2 = soma % 10; // N2 recebera o resto da soma de conta e inverso
    n2 *= 2; // N2 agora recebera ele mesmo * 2 que é a sua posicao na soma
    soma = soma / 10; // Soma recebera a soma dividida por 10

    n3 = soma % 10; // N3 recebera o resto da soma de conta e inverso
    n3 *= 3; // N3 agora recebera ele mesmo * 3 que é a sua posicao na soma
    soma = soma / 10; // Soma recebera a soma dividida por 10

    digito = (n1+n2+n3) % 10; // Digito verificador é o resto da soma de n1+n2+n3.

    //Informaa ao usuario o valor final
    printf("\nConta %d - %d", conta, digito);

    //Retorno de erros caso ocorram
    return 0;
}
