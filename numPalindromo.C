#include <stdio.h>
#include <math.h>

int main(void){
    int num, n0, n1, n2, n3, n4, inverso, aux; // Declaração das variaveis do tipo inteiro
    printf("Digite um numero inteiro de 5 digitos: "); // Informa ao usuario o que deve ser digitado em seguida
    scanf("%d", &num); // faz a leitura e armazenamento do numero digitado pelo usuario na variavel num
    aux = num; // Variavel auxiliar para armazenar o valor de num temporariamente
    if(num < 100000 && num > 9999){ // Validação do numero de 5 digitos
        // Desmembramento do numero para pegar digito por digito
        n0 = num % 10;
        num = num / 10;
        n1 = num % 10;
        num = num / 10;
        n2 = num % 10;
        num = num / 10;
        n3 = num % 10;
        num = num / 10;
        n4 = num % 10;
        // PROCESSO DE CALCULO DO NUMERO
        n0 = n0 * 10000;
        n1 = n1 * 1000;
        n2 = n2 * 100;
        n3 = n3 * 10;
        n4 = n4 * 1;
        //Concatenação do numero inverso
        inverso = n0 + n1 + n2 + n3 + n4;
        num = aux; // Num recebe o valor que estava armazenado temporariamente na variavel auxiliar
        if(inverso == num){ // Condicação de verificação se numero digitado for igual ao inverso este sera um palindromo e sera verdadeiro
            printf("Temos um palindromo, pois o numero digitado %d representado de tras para frente eh %d.", num, inverso);
        }else{ // Se o numero digitado nao for igual ao inverso, este sera falso e nao sera um palindromo
            printf("Nao eh palindromo, pois o numero digitado %d representado de traps para frente eh %d", num, inverso);
        }
    }else{ // Informa ao usuario que o numero digitado não é de 5 digitiso
        printf("Numero inválido! Digite um numero inteiro de 5 digitos");
    }
    return 0; // Retorna erros se houverem
}
