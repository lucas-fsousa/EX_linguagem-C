#include<stdio.h>

//Início do código principal
int main()
{
    // Definição de variáveis
    float adicional, valorHora, salario, salfamilia;
    int id, horasTrab, filhos;

    // Entrada de dados digitados pelo usuário
    printf("Digite o ID do funcionário: ");
    scanf("%d", &id);
    printf("Quantidade de filhos menores de 14 anos: ");
    scanf("%d", &filhos);
    printf("Valor do salario familia R$");
    scanf("%f", &salfamilia);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrab);
    printf("Valor por hora trabalhada R$");
    scanf("%f", &valorHora);

    // Realização dos cálculos
    salario = (horasTrab * valorHora);
    adicional = salfamilia * filhos;
    salario = salario + adicional;

    // Informa o resultado final para o usuário
    printf("O funcionário ID%d recebe R$%.2f por hora trabalhada.\n", id, valorHora);
    printf("Será pago um total de R$%.2f com o salário família.", salario);

    // Retorno de erros
    return 0;

} // Fim do código
