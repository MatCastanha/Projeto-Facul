/*
10) Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. 
Calcule e mostre o total do seu sal�rio no referido m�s, 
sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�: 

- sal�rio bruto. 
- quanto pagou ao INSS. 
- quanto pagou ao sindicato. 
- o sal�rio l�quido. 

Calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo: 
+ Sal�rio Bruto: R$
- IR (11%): R$ 
- INSS (8%): R$ 
- Sindicato (5%): R$ 
= Sal�rio L�quido: R$ 

OBS: Sal�rio L�quido = Sal�rio Bruto - Descontos 

*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salHora, horasMes, salBruto, salLiquido, ir, inss, sindicato, desconto;
	
	printf("Quanto voc� ganha por hora?\nR$");
	scanf("%f", &salHora);
	printf("Qual o n�mero de horas trabalhadas no m�s?\n");
	scanf("%f", &horasMes);
	
	salBruto = salHora * horasMes;

	desconto = (ir= salBruto * 0.11) + (inss= salBruto * 0.08) + (sindicato= salBruto * 0.05);
	
	salLiquido = salBruto - desconto;
	
	printf("========================================\n");
	printf("Sal�rio Bruto: R$%.2f\n", salBruto);
	printf("========================================\n");
	printf("- IR (11%%): R$%.2f\n", ir);
	printf("- INSS (8%%): R$%.2f\n", inss);
	printf("- Sindicato (5%%): R$%.2f\n", sindicato);
	printf("========================================\n");
	printf("Voc� ganhar� no total R$%.2f este m�s\n", salLiquido);
	printf("========================================");


	return 0;
}
