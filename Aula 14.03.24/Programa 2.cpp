#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Criar variaveis de memoria
	int n1=10; //declarei e atribui
	int n2=20; //declarei e atribui
	int soma;  //somente declarei
	float media;
	soma=n1+n2;
	printf("Soma = %i ",soma);
	//calcular a m�dia aritim�tica
	media= soma/2;
	printf("\nM�dia= %.1f",media);
	
	return 0;
}
