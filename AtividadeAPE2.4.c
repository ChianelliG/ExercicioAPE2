#include<stdio.h>

int main(){
	int Real = 0;
	float CotDolar = 4.86;
	float Dolar = 0;
	
	printf("Real: ");
	scanf("%d", &Real);
	
	Dolar = Real / CotDolar;
	printf("Dolar: %.2f\n\n", Dolar);
	
	system("pause");

}
