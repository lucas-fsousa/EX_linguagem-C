#include<stdio.h>

//Definição de uma constante 
#define salFamilia 115.50

//Início do código principal
int main()
{
    // Definição de variáveis
    float adicional, valorHora, salario;
    int id, horasTrab, filhos;

    // Entrada de dados digitados pelo usuário
    printf("Digite o ID do funcionário: ");
    scanf("%d", &id);
    printf("Quantidade de filhos menores de 14 anos: ");
    scanf("%d", &filhos);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrab);
    printf("Valor por hora trabalhada R$\n");
    scanf("%f", &valorHora);

    // Realização dos cálculos
    salario = horasTrab * valorHora;
    adicional = salFamilia * filhos;
    salario = salario + adicional;

    // Informa o resultado final para o usuário
    printf("O funcionário ID%d recebe R$%.2f por hora trabalhada.\n", id, valorHora);
    printf("Será pago um total de R$%.2f com o salário família.", salario);
    
    // Retorno de erros
    return 0;
    
} // Fim do código