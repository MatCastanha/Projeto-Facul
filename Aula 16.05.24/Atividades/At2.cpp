/*
2) Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e imprima a m�dia final deste aluno. 
Considerar que a m�dia � ponderada e que o peso � 2 para n1, 3 para n2 e 5 para n3. 
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	
	printf("nota 1�:");
	scanf("%f", &n1);
	printf("nota 2�:");
	scanf("%f", &n2);
	printf("nota 3�:");
	scanf("%f", &n3);
	
	
	media = (n1*0.2)+(n2*0.3)+(n3*0.5);
	
	printf("M�dia: %.2f\n", media);
	
	if(media<=5){
		printf("Reprovado");
	}
	else if(media<=10){
		printf("Aprovado");
	}
	
	return 0;
}
