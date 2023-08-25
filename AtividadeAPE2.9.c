#include <stdio.h>

main() {

    float custofabrica;
	float percdistribuidor; 
	float impostos; 
	float precofinal;

    printf("Digite o custo de fabrica do carro: \n");
    scanf("%f",&custofabrica);

    percdistribuidor = (custofabrica * 28) / 100;
    impostos = (custofabrica * 45) / 100;

    precofinal = custofabrica + percdistribuidor + impostos;

    printf("\nO valor final do carro e : %.2f", precofinal);
    
    system("pause");
}
