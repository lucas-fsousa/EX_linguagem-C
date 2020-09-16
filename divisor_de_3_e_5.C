#include <stdio.h>

int main(void){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num % 3 == 0 && num % 5 == 0){
        printf("O numero %d pode ser dividido por 3 e por 5!", num);
    }else{
        printf("O numero %d nao pode ser dividido por 3 e por 5!", num);
    }
    return 0;
}
