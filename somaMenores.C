#include <stdio.h>
#include <math.h>

int main(void){
    float n0, n1, n2, n3, soma;
    printf("Digite um numero: ");
    scanf("%f", &n0);
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero: ");
    scanf("%f", &n2);
    printf("Digite um numero: ");
    scanf("%f", &n3);
    if(n0 == n1 || n0 == n2 || n0 == n3 || n1 == n2 || n1 == n3 || n3 == n2){
        printf("Digite numeros diferentes!");
    }else if(n0 > n1 && n0 > n2 && n0 > n3) {
        soma = n1 + n2 + n3;
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n0, soma);
    }else if(n1 > n0 && n1 > n2 && n1 > n3) {
        soma = n0 + n2 + n3;
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n1, soma);
    }else if(n2 > n0 && n2 > n1 && n2 > n3) {
        soma = n0 + n1 + n3;
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n2, soma);
    }else{
        soma = n0 + n1 + n2;
        printf("o número %.2f foi o maior, portanto a soma dos 3 menores corresponde a %.2f", n3, soma);
    }
    return 0;
}
