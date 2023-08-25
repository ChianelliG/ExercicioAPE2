#include<stdio.h>

int main(){
	
	int mercadoria = 0;
	int despesas, frete = 0;
	int venda = 0;
	int custototal = 0;
	int lucro = 0;
	
	printf("Digite o custo da mercadoria: \n");
	scanf("%d", &mercadoria);
	printf("Digite os custos com eventuais despesas: \n");
	scanf("%d", &despesas);
	printf("Digite quanto sera o frete: \n");
	scanf("%d", &frete);
	
	custototal = mercadoria + despesas + frete;
	
	printf("O custo total e de: %d.\n\n", custototal);
	
	printf("\nDigite qual sera o valor de venda: \n");
	scanf("%d", &venda);
	
	lucro = venda - despesas - frete;
	
	printf("\nO seu lucro com a mercadoria sera: %d.\n", lucro);
	
	system("pause");
}
