#include<stdio.h>

int main(){
	
	float salarioa;
	float reajuste = 1.05;
	float salario;
	
	printf("SERAO REAJUSTADOS OS SALARIOS\n\n");
	
	printf("Digite seu salario atual: \n");
	scanf("%f", &salarioa);
	
	salario = salarioa * reajuste;
	
	printf("Seu salario agora sera de: %.2f", salario);
	
	system("pause");
	}
