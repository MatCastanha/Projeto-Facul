/*
6) Fa�a um programa que solicite ao usu�rio que ele digite o tamanho do lado de um quadrado e calcule a �rea do um quadrado,
em seguida mostre o dobro desta �rea para o usu�rio.
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
	printf("A �rea do quadrado � de %.1fcm�\nE o dobro da �rea � de %.1fcm�", conta, conta * 2);
	
	return 0;
}
