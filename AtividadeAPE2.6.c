#include<stdio.h>

int main(){
	
	float raio = 0;
	float area = 0;
	float pi = 3.14;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * raio * raio;
	
	printf("A area do circulo e de: %.2f", area);
	
	system ("pause");
}
