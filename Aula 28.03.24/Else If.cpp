#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float media;
	printf("Informe a média: ");
	scanf("%f", &media);
	
	//if encadeado
	if(media>=8){
		printf("Aluno Aprovado");
	}
	else if (media<=4){
		printf("Aluno Reprovado");
	}
	else{
		printf("Aluno Em Exame");
	}
	
	return 0;
}
