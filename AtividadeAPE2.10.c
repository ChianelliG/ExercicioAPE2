#include <stdio.h>

main() {

    float salariof = 0;
    float comissao = 0;
    int vendas = 0;
    float salariofinal = 0;
    float comitotal = 0;
    int valortvendas = 0;
    
    printf("Digite o salario base do funcionario: \n");
    scanf("%f", salariof);
    printf("Digite qual sera a comissao fixa para cada carro vendido: \n");
    scanf("%f", comissao);
    printf("Digite qual foi a quantidade de carros vendidos no mes pelo funcionario: \n");
    scanf("%d", vendas);
    printf("Digite qual foi o total de vendas no mes: \n");
    scanf("%d", valortvendas);
    
    salariofinal = salariof + comitotal;
    comitotal = comissao * valortvendas;
    comitotal = comitotal + (vendas * 5/100);
    
    printf("Carros vendidos pelo funcionario: %d.\n", vendas);
    print("Total de vendas: %d.\n", vendas);
    printf("Valor total da comissao: %.2f.\n", comitotal);
    printf("Salario base do funcionario: %.2f.\n", salariof);
    printf("Salario final do funcionario: %.2f.\n", salariofinal);
    
}
