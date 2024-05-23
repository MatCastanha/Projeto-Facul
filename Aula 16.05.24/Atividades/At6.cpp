/*
6) Faça um programa que solicite ao usuário que ele digite o tamanho do lado de um quadrado e calcule a área do um quadrado,
em seguida mostre o dobro desta área para o usuário.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float ladoQuadrado, conta;
	
	printf("De o valor de um lado do Quadrado: ");
	scanf("%f", &ladoQuadrado);
	
	conta=pow(ladoQuadrado,2);
	printf("A àrea do quadrado é de %.1fcm²\nE o dobro da área é de %.1fcm²", conta, conta * 2);
	
	return 0;
}
