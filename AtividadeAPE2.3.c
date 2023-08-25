#include<stdio.h>

int main(){
	
	int Largura, Comprimento = 0;
	int Area;
	
	printf("Para calcular a area da sua sala\n");
	printf("Digite qual a largura da sala: \n");
	scanf("%d", &Largura);
	printf("Digite qual o comprimento da sala: \n");
	scanf("%d", &Comprimento);
	
	Area = Largura * Comprimento;
	
	printf("\nA area da sua sala: %d\n", Area);
	
	system("pause");
}
