#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float resultado, r, indice, conta;
	
	printf("Digite um valor para o raio: ");
	scanf("%f", &r);
	resultado = (4.0/3.0) * 3.14159 * pow(r,3);
	printf("O volume de um circulo com %.2f é de %.2f", r, resultado);

	return 0;
}
