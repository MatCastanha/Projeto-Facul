/*
7) Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioHora, horasMes, salarioMes;
	
	printf("Quanto voc� ganha por hora?\nR$");
	scanf("%f", &salarioHora);
	printf("Qual o n�mero de horas trabalhadas no m�s?\n");
	scanf("%f", &horasMes);
	
	salarioMes = salarioHora * horasMes;
 	
	printf("Voc� ganhar� no total %.2f este m�s", salarioMes);
	
	return 0;
}
