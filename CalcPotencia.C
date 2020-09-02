#include <stdio.h>
#include <math.h> // Importacao da biblioteca matematica

int main(void){
    // Declaracao de variavel
    int x, y, z;

    // entrada de valores
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    //atribuicao de valor a variavel
    y = pow(x, 2);
    z = pow(x, 3);

    //Resultado final

    printf("Potencia: %d | Valor de Y: %d | Valor de Z: %d", x, y, z);

    return 0;
}
