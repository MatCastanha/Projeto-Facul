/*
7) Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioHora, horasMes, salarioMes;
	
	printf("Quanto você ganha por hora?\nR$");
	scanf("%f", &salarioHora);
	printf("Qual o número de horas trabalhadas no mês?\n");
	scanf("%f", &horasMes);
	
	salarioMes = salarioHora * horasMes;
 	
	printf("Você ganhará no total %.2f este mês", salarioMes);
	
	return 0;
}
