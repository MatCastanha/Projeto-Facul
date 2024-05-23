/*
4) Faça um programa que solicite ao usuário que ele digite 2 números e mostre o maior ou se os números são iguais. 
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	
	printf("De um valor: ");
	scanf("%f", &n1); 
	printf("De outro valor: ");
	scanf("%f", &n2);
	
	if(n1>n2){
		printf("%.1f é maior que %.1f", n1, n2);
	}
	else if(n2>n1){
		printf("%.1f maior que %.1f", n2, n1);
	}
	else{
		printf("%.1f e %.1f são iguais", n1, n2);
	}
	
	return 0;
}
