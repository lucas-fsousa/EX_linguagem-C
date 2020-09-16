#include <stdio.h>

int main(void){
    float l0, l1, l2;
    printf("Digite o valor correspondente ao primeiro lado do triangulo: ");
    scanf("%f", &l0);
    printf("Digite o valor correspondente ao segundo lado do triangulo: ");
    scanf("%f", &l1);
    printf("Digite o valor correspondente ao terceiro lado do triangulo: ");
    scanf("%f", &l2);
    if(l0 + l1 > l2 && l1 + l2 > l0 && l2+l0 > l1){
        printf("os lados %.1f x %.1f x %.1f pode formar um triangulo!", l0, l1, l2);
    }else{
        printf("Os lados %.1f x %.1f x %.1f nao podem formar um triangulo!", l0, l1, l2);
    }
    return 0;
}
