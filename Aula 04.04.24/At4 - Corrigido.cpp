#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	float n3, conta;
	
	printf("Digite um valor para N1: ");
	scanf("%i", &n1);
	printf("Digite um valor para N2: ");
	scanf("%i", &n2);
	printf("Digite um valor para N3: ");
	scanf("%f", &n3);
 
    conta = 2*n1 * 0.5*n2;
    printf("\nLetra a: %.2f", conta);
    
    conta = n1 * 3 + n3;
	printf("\nLetra b: %.2f", conta);
	
	conta = pow(n3, 3);
	printf("\nLetra c: %.2f", conta);



}

