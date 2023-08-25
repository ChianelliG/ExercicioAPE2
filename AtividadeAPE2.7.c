#include<stdio.h>

int main(){
	
	int anos;
	int meses;
	int dias;
	int tdias;
	
	printf("Digite sua idade em anos: \n");
	scanf("%d", &anos);
	printf("Digite a quantidade de meses: \n");
	scanf("%d", &meses);
	printf("Digite a quantidade de dias: \n");
	scanf("%d", &dias);
	
	tdias = dias + (anos*365) + (meses*30);
	
	printf("\nSua idade total em dias e: %d.\n", tdias);
	
	system("pause");
	}
