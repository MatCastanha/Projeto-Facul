#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, km;
	
	printf("Informe a distancia do local: ");
	scanf("%f", &km);
	
	valor =  4.9 + 3 * km;
	printf("O valor da corrida dará R$%.2f", valor);

	return 0;	
}
