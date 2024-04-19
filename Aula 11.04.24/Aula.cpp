/*Criar um programa para calcular o salario liquido de um funcionario.
Salario Liquido = Salario Bruto - Descontos

Descontos:

Vale transporte = Se tiver, descontar 6% do Salario Bruto
INSS = 8% do Salario Bruto
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salBruto, salLiquido, inss, valorVt;
	char querVt;
	
	//Pegando Informação do Usuario
	printf("Informe o Salário Bruto: ");
	scanf("%f", &salBruto);
	printf("Quer vale transporte? (S/N): ");
	scanf(" %c", &querVt);
	
	querVt = toupper (querVt);
	
	//calcular o valorVt
	if(querVt=='S'){
		valorVt =  salBruto*0.06;
	}
	else{
		valorVt = 0;
	}
	
	//calcular o inss
	inss = salBruto*0.08;
	
	//calcular o salário Liquido
	salLiquido = salBruto - inss - valorVt;
	
	//imprimir o resultado
	printf("Salário Bruto = R$%.2f\nVale Transporte = R$%.2f\nInss = R$%.2f\nSalário Liquido = R$%.2f",salBruto, valorVt, inss, salLiquido);	
	
	
	return 0;
}
