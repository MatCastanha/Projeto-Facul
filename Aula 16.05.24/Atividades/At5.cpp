/*
5) Faça um programa que peça as 4 notas bimestrais e calcule a média aritmética.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0, notas, c=0;
	float soma, media;
	
	printf("Digite Sua Notas Bimestrais\n");
	
	for(i=1; i<=4; i++){
		printf("%dº Bimestre: ", i);
		scanf("%i", &notas);
		
		if(notas>0){
			c++;
			soma+=notas;
		}
	}
	media = soma/c;
	
	printf("Media: %.1f", media);
	
	return 0;
}
