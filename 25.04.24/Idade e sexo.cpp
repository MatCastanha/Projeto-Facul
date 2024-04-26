#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	char genero;
	
	printf("Seu Sexo Biologico(M/F): ");
	scanf(" %c", &genero);
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	genero=toupper(genero);
	
	if(genero=='M' && idade<=10){
		printf("Carrinho");
	}
	else if(genero=='M' && idade>=10){
		printf("Bola");
	}
	else if(genero=='F' && idade<=10){
		printf("Boneca");
	}
	else{
		printf("Esmalte");
	}
}
