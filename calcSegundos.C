#include<stdio.h>

int main()
{
    // Declaração de variavel
    int s, m, h;

    // Entrada de dados
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);

    // Cálculo de horas, minutos e segundos
    m = s / 60;
    h = m / 60;

    // Ajuste De horas minutos e segundos para o Padrão
    m = m % 60;
    s = s % 60;

    // Informe do resultado final para o usuário
    printf("%d horas > %d minutos > %d segundos", h, m, s);

    // Retorno de erros caso ocorram
    return 0;
}
