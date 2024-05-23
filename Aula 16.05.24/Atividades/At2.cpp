/*
2) Faça um algoritmo que leia três notas de um aluno, calcule e imprima a média final deste aluno. 
Considerar que a média é ponderada e que o peso é 2 para n1, 3 para n2 e 5 para n3. 
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	
	printf("nota 1º:");
	scanf("%f", &n1);
	printf("nota 2º:");
	scanf("%f", &n2);
	printf("nota 3º:");
	scanf("%f", &n3);
	
	
	media = (n1*0.2)+(n2*0.3)+(n3*0.5);
	
	printf("Média: %.2f\n", media);
	
	if(media<=5){
		printf("Reprovado");
	}
	else if(media<=10){
		printf("Aprovado");
	}
	
	return 0;
}
