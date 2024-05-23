/*
1) Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:  
a) o produto do dobro do primeiro com metade do segundo.  
b) a soma do triplo do primeiro com o terceiro.  
c) o terceiro elevado ao cubo. 
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	float n3, operacao;
	
	printf("De um valor inteiro: ");
	scanf("%i", &n1); 
	printf("De outro valor inteiro: ");
	scanf("%i", &n2);
	printf("De um valor real: ");
	scanf("%f", &n3);
	
	operacao = (n1 * 2) * (n2/2);
	printf("a) o produto do dobro do primeiro com metade do segundo: \n%.1f\n",operacao);
	
	operacao = (n1 * 3) + n3;
	printf("b) a soma do triplo do primeiro com o terceiro: \n%.1f\n",operacao);
	
	operacao = pow(n3, 3);
	printf("c) o terceiro elevado ao cubo: \n%.1f\n",operacao);
	
	
	return 0;	
}
