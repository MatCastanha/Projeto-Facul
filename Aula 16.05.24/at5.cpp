#include <stdio.h>

int main(){
	int i = 0, soma = 0, idade;
	float media;
	
	while(i<5){
		printf("Digite sua idade: ");
		scanf("%i", &idade);
		i++;
		soma+=idade;
	} 
	
	media = soma/i-1;
	printf("Media das idades: %.1f", media);

	return 0;
}
