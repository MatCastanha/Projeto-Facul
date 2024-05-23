/*
10) Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês, 
sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: 

- salário bruto. 
- quanto pagou ao INSS. 
- quanto pagou ao sindicato. 
- o salário líquido. 

Calcule os descontos e o salário líquido, conforme a tabela abaixo: 
+ Salário Bruto: R$
- IR (11%): R$ 
- INSS (8%): R$ 
- Sindicato (5%): R$ 
= Salário Líquido: R$ 

OBS: Salário Líquido = Salário Bruto - Descontos 

*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salHora, horasMes, salBruto, salLiquido, ir, inss, sindicato, desconto;
	
	printf("Quanto você ganha por hora?\nR$");
	scanf("%f", &salHora);
	printf("Qual o número de horas trabalhadas no mês?\n");
	scanf("%f", &horasMes);
	
	salBruto = salHora * horasMes;

	desconto = (ir= salBruto * 0.11) + (inss= salBruto * 0.08) + (sindicato= salBruto * 0.05);
	
	salLiquido = salBruto - desconto;
	
	printf("========================================\n");
	printf("Salário Bruto: R$%.2f\n", salBruto);
	printf("========================================\n");
	printf("- IR (11%%): R$%.2f\n", ir);
	printf("- INSS (8%%): R$%.2f\n", inss);
	printf("- Sindicato (5%%): R$%.2f\n", sindicato);
	printf("========================================\n");
	printf("Você ganhará no total R$%.2f este mês\n", salLiquido);
	printf("========================================");


	return 0;
}
