/*
8) Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, pesoIdeal;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	pesoIdeal = (72.7 * altura) - 58;
	
	printf("O peso ideal para uma pessoa com a sua altura é de %.1fKg", pesoIdeal);

	
	return 0;
}
