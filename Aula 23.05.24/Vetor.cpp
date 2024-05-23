#include <stdio.h>
#include <locale.h>

//Vetor (array)
int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade[5], i;
	
	//Cadastrando
	for(i=0; i<5; i++){
		printf("Informe a idade: ");
		scanf("%i", &idade[i]);
	}
	
	//Imprimindo
	for(i=0; i<5; i++){
		printf("Posição %i = %i\n", i, idade[i]);
	}
	
	printf("%i\n", idade[2]);
	printf("%i\n", idade[0]+idade[4]);
	//printf("%i", idade[100]); ocorre uma invazão de memoria.
	
	return 0;
}
